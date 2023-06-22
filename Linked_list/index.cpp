#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<map>
#include<numeric>

using namespace std;
// Classes
// Singly Linked List
class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this-> data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Node with value-: " << this->data << " deleted" << endl;
    }
};

void print(Node* & head) {
    Node* temp = head; // creating seperate pointer so that changes are not made in original L.L
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLen(Node*head) {
    Node*temp = head;
    int i = 0;
    while(temp != NULL) {
        temp = temp->next;
        i++;
    }

    return i; 
}


void insertAtHead(Node*& head, Node*& tail, int data) {
    // 1
    Node* newNode = new Node(data);

    // 2
    if(head == NULL) tail = newNode; // to update tail, insertion at head would work fine if we ignore this line 
    newNode->next = head;

    // 3
    head = newNode;
}


void insertAtTail(Node*& tail, Node*& head, int data) {
    if(tail == NULL) {
        tail = new Node(data);
        head = tail;
        return;
    }
    // 1
    Node* newNode = new Node(data);

    // 2
    tail->next = newNode;

    // 3
    tail = newNode;
}


void insertAtPosition(Node*& head, Node*& tail, int data, int position) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    if(position >= getLen(head)) {
        insertAtTail(tail, head, data);
        return;
    }

    // 1-: find position
    Node* prev = head;
    int i = 1;
    while(i < position) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    // 2-:
    Node* newNode = new Node(data);
    
    // 3-:
    newNode->next = curr;

    // 4-:
    prev->next = newNode;
}



void deleteNode(Node*& head, Node*&tail, int pos) {
    if(head == NULL) {
        cout << "Linked List is already empty" << endl;
        return;
    }

    if(pos == 1) {
        // 1
        Node* temp = head;
        // 2
        head = head->next;
        // 3
        temp->next = NULL;
        // 4
        delete temp;
        return;
    }


    int len = getLen(head);
    if(pos == len) {
        // 1
        int i=1;
        Node* prev = head; 
        while(i  < len-1) {
            prev = prev->next;
            i++;
        }
        // 2
        prev->next = NULL;
        // 3
        Node* temp = tail;
        // 4
        tail = prev;
        // 5
        delete temp;
        return;
    }

    // delete at a position
 
    // 1
    Node* prev = head;
    int i = 1;
    while(i < pos-1) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    // 2 
    prev->next = curr->next;
    // 3 
    curr->next = NULL;

    // 4
    delete curr;
}




//////////////////////
// // Doubly Linked List
// class Node {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }

//     ~Node() {
//         cout << "we are inside destructor with value-: " << this->data << endl;
//     }
// };


// void print(Node*& head) {
//     Node*temp = head;

//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getLength(Node*& head) {
//     int i=0;
//     Node* temp = head;

//     while(temp !=  NULL) {
//         i++;
//         temp = temp->next;
//     }

//     return i;
// }


// void insertAtHead(Node*& head, Node*& tail, int data) {
//     if(head == NULL) {
//         head = new Node(data);
//         tail = head;
//         return;
//     }

//     // 1
//     Node* newNode = new Node(data);
//     head->prev = newNode;
//     // 2
//     newNode->next = head;
//     // 3
//     head = newNode;
// }


// void insertAtTail(Node*& tail, Node*& head, int data) {
//     if(tail == NULL) {
//         tail = new Node(data);
//         head = tail;
//         return;
//     }

//     // 1
//     Node* newNode = new Node(data);
//     newNode->prev = tail;
//     // 2
//     tail->next = newNode;
//     // 3
//     tail = newNode;
// }


// void insertAtPos(Node*& head, Node*& tail, int pos, int data) {
//     if(head == NULL) {
//         head = new Node(data);
//         tail = head;
//         return;
//     }

//     if(pos == 0) {
//         insertAtHead(head, tail, data);
//         return;
//     }

//     if(pos >= getLength(head)) {
//         insertAtTail(tail, head, data);
//         return;
//     }

//     // 1-: find prev
//     int i = 0;
//     Node* curr = head;
//     while(i < pos) {
//         i++;
//         curr = curr->next;
//     }
//     // 2
//     Node* prevNode = curr->prev;
//     Node* newNode = new Node(data);
//     prevNode->next = newNode;
//     // 3
//     newNode->next = curr;
//     // 4
//     newNode->prev = prevNode;
//     // 5
//     curr->prev = newNode;
// }


// void deleteNode(Node*& head, Node*& tail, int pos) {
//     if(pos > getLength(head)) {
//         cout << "Enter a valid position" << endl;
//         return;
//     }
    
//     if(head == NULL) {
//         cout << "Linked List is already empty" <<endl;
//         return;
//     } 

//     if(head->next == NULL) {
//         // single node
//         Node* temp = head;
//         head = NULL;
//         tail ==  NULL;

//         delete temp;
//         return;
//     } 


//     if(pos == 1) {
//         // 1
//         Node* temp = head;
//         head = temp->next;
//         // 2
//         head->prev = NULL;
//         // 3
//         temp->next = NULL;
//         // 4
//         delete temp;
//         return;
//     }


//     if(pos == getLength(head)) {
//         // 1
//         Node* temp = tail;
//         tail = tail->prev;
//         // 2
//         tail->next = NULL;
//         // 3
//         temp->prev = NULL;
//         // 4
//         delete temp;
//         return;
//     }

    
//     // 1-: find curr
//     int i=1;
//     Node* curr = head;
//     while(i < pos) {
//         i++;
//         curr = curr->next;
//     }
//     Node* previous = curr->prev;
    
//     // 2 
//     previous->next = curr->next;
//     // 3-: link previous with next to current node
//     curr->next->prev = previous;
//     // 4-: make both addresses on curr = NULL
//     curr->prev = NULL;
//     curr->next = NULL;

//     // 5
//     delete curr;
// }



////////////////////////////
// Functions
// Node* reverseUsingRecursion(Node*& prev, Node*& curr) {
//     if(curr == NULL) return prev;

//     Node* temp = curr->next;
//     curr->next = prev;
//     prev = curr;
//     reverseUsingRecursion(prev, temp);
// }


// Node* reverseUsingLoop(Node*& prev, Node*& curr) {
//     while(curr != NULL) {
//         Node* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//     return prev;
// }


// Node* findMid(Node*& head) {
//     if(head == NULL) {
//         cout << "Linked List is empty" << endl;
//         return head;
//     }
//     if(head->next == NULL) return head;

//     int len = getLen(head);
//     int i = 0; 
//     Node* mid = head;
//     while(i < len/2-1) {
//         i++;
//         mid = mid->next;
//     }
//     return (len%2 != 0 ? mid->next: mid); 
// }


// // using rabbit and tortioise algo
// Node* findMid2(Node*& head) {
//     if(head == NULL) {
//         cout << "Linked List is empty" << endl;
//         return head;
//     }

//     if(head->next == NULL) return head;

//     // if no. of nodes > 1
//     Node* fast = head; // if you want mid = mid+1(in case of even) just do => Node* fast = head->next;
//     Node* slow = head; 

//     while(fast != NULL) {
//         fast = fast->next;
//         if(fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }



// Node* reverseKgroups(Node*& head, int k) {
//     if(head == NULL) return head;

//     if(k > getLen(head)) return head;

//     // length >= k
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;
//     int count = 0;

//     while(count < k) {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         count++;
//     }

//     // calling recursively to revrse other K groups
//     if(forward != 0) {
//         head->next = reverseKgroups(forward, k);
//     }
    
//     return prev;
// }


bool findLoop(Node*& head) {
    if(head == NULL) return head;

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow) return true;
    }

    return false;
}


Node* findStartingOfLoop(Node*& head) {
    if(head == NULL) return head;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow) break;
    }

    slow = head;

    while(slow != fast) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}


void removeLoop(Node*& head) {
    if(head == NULL) return;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow) break;
    }

    slow = head;

    Node* prev = NULL;
    while(slow != fast) {
        prev = fast;
        fast = fast->next;
        slow = slow->next;
    }

    prev->next = NULL;
    return;    
}













int main() {

    // // SINGLY LINKED LIST
    // // Node* head = new Node(10); // L.L => 60 50 40 20 10
    // Node* head = NULL; // when insert At head L.L => 60 50 40 20
    // Node* tail = NULL; 
    
    // insertAtTail(tail, head, 10);
    // insertAtTail(tail, head, 20);
    // insertAtTail(tail,head, 30);
    // insertAtTail(tail, head, 40);
    // insertAtTail(tail, head, 50);
    // insertAtTail(tail, head, 60);

    // print(head);

    // // cout << endl;
    // // cout << "head-: " << head->data << endl;
    // // cout << "tail-: " << tail->data << endl;
    
    // // cout << "Inserting at a position" << endl;
    // // insertAtPosition(head, tail, 101, 4);
    
    // // print(head);
    // // cout << endl;
    // // cout << "head-: " << head->data << endl;
    // // cout << "tail-: " << tail->data << endl;


    // // deletion
    // deleteNode(head, tail, 2);
    // print(head);
    // cout << "head-: " << head->data << endl;
    // cout << "tail-: " << tail->data << endl;






    ///////////////////////////////
    // // Doubly Linked list
    // Node* head = NULL;
    // Node* tail = NULL;

    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,60);
    // insertAtHead(head,tail,90);
    // insertAtTail(tail, head, 181);
    // print(head);

    // cout << "head-: " << head->data << endl;
    // cout << "tail-: " << tail->data << endl;


    // insertAtPos(head, tail, 1, 152);
    // insertAtPos(head, tail, 6, 111);
    // insertAtPos(head, tail, 0, 1);
    // print(head);


    // // cout << "head-: " << head->data << endl;
    // // cout << "tail-: " << tail->data << endl;

    // deleteNode(head, tail, 2);
    // print(head);

    // cout << "head-: " << head->data << endl;
    // cout << "tail-: " << tail->data << endl;



//////////////////////////
    // // Reverse L.L using recursion -: using singly L.L class Node
    // Node* prev = NULL;
    // Node* curr = head;
    // head = reverseUsingRecursion(prev, curr);
    // print(head);


    // // reverse L.L using loop
    // Node* prev = NULL;
    // Node* curr = head;
    // head = reverseUsingLoop(prev, curr);
    // print(head);


    // // find mid of L.L
    // Node* mid = findMid2(head);
    // cout << mid->data << endl;


    // // reverse L.L in k groups
    // int k = 2;
    // head = reverseKgroups(head, k);
    // print(head);


    // H.w-: is circular L.L



    // Creating a L.L with a loop
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eight = new Node(80);
    Node* nineth = new Node(90);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = nineth;
    nineth->next = fifth;

    // print(first);


//////////////////////////
    // Loop questions
    // // (v.imp.) find loop is present or not in L.L
    // cout << "is there a loop-: " << findLoop(first) << endl;


    // //(v.imp.) find starting point of loop
    // Node* point = findStartingOfLoop(first);

    // cout << "Starting point of loop is-: " << point->data << endl; 


    // // (v.imp.) remove Loop
    // removeLoop(first);
    // print(first);

















    return 0;
}