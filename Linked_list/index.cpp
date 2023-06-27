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




///////////////////////////////
// // circular singly linked list
// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this-> data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         cout << "Node with value-: " << this->data << " deleted" << endl;
//     }
// };


// void printCircular(Node*& head) {
//     Node* temp = head->next; // even when there is only one Node in L.L because in circular L.L single Node always points to itself. so head->next will be valid    

//     cout << head->data << " ";
//     while(temp != head) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getLenCircular(Node*& head) {
//     Node* temp = head->next; 
//     int i = 1;

//     while(temp != head) {
//         temp = temp->next;
//         i++;
//     }
//     return i;
// }


// void insertCircularHead(Node*& tail, int data) {
//     if(tail == NULL) {
//         Node* newNode = new Node(data);
//         tail = newNode;
//         tail->next = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = tail->next;
//     tail->next = newNode;
// }

// void insertCircularTail(Node*& tail, int data) {
//     if(tail == NULL) {
//         Node* newNode = new Node(data);
//         tail = newNode;
//         tail->next = newNode;
//         return;
//     }

//     Node* newNode = new Node(data); 
//     newNode->next = tail->next;
//     tail->next = newNode;
//     tail = newNode;
// }

// void insertCircularAtPos(Node*& tail, int pos, int data) {
//     if(tail == NULL) {
//         Node* newNode = new Node(data);
//         tail = newNode;
//         tail->next = newNode;
//         return;
//     }

//     if(pos == 1) {
//         insertCircularHead(tail, data);
//         return;
//     }

//     if(pos == getLenCircular(tail->next)) {
//         insertCircularTail(tail, data);
//         return;
//     }

//     // in between
//     int i = 1;
//     Node* prev = tail->next;
//     while(i < pos-1) {
//         i++;
//         prev = prev->next;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = prev->next;
//     prev->next = newNode;
// }


// Node* findPrevTail(Node*& tail) {
//     Node* temp = tail->next;
//     int len = getLenCircular(tail->next);
//     int i = 0;
//     while(i < len) {
//         i++;
//         temp = temp->next;
//     }
//     return temp;
// }

// void deleteNodeCircular(Node*& tail, int pos) {
//     if(pos > getLength(head)) {
//         cout << "Enter a valid position" << endl;
//         return;
//     }

//     if(tail == NULL) cout << "L.L is already empty" << endl;
     

//     if(pos == 1) {
//         Node* head = tail->next;
//         tail->next = head->next;
//         head = NULL;
//         delete head;
//         return;
//     }

//     if(pos == getLenCircular(tail->next)) {
//         Node* prev = findPrevTail(tail);
//         prev->next = tail->next;
//         tail->next = NULL;

//         delete tail;
//         return;
//     }

//     int i = 1;
//     Node* prev = tail->next;
//     while(i < pos-1) {
//         i++;
//         prev = prev->next;
//     } 

//     Node* curr = prev->next;
//     prev->next = curr->next;
//     curr->next = NULL;

//     delete curr;
// }



/////////////////////////////////////
// // circular doubly linked list
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
//         cout << "Deleting Node with value = " << this->data << endl;
//     }
// };


// void printcircularDouble(Node* head) {
//     Node* temp = head->next;

//     cout << head->data << " ";
//     while(temp != head) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;

// }

// int getLencircularDouble(Node* head) {
//     int i = 1;
//     Node* temp = head->next;

//     while(temp != head) {
//         i++;
//         temp = temp->next;
//     }
//     return i;
// }

// void insertHeadCircularDoubly(Node*& tail, Node*& head, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = tail = newNode;

//         head->next = head->prev = newNode;
//         tail->next = tail->prev = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     newNode->prev = tail;
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }


// void insertTailCircularDoubly(Node*& tail, Node*& head, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = tail = newNode;
//         head->next = head->prev = newNode;
//         tail->next = tail->prev = newNode;
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = tail->next;
//     newNode->prev = tail;
//     tail->next = newNode;
//     head->prev = newNode;
//     tail = newNode;
// }


// void insertAtPosCircularDoubly(Node*& tail, Node*& head, int pos, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = tail = newNode;
//         head->next = head->prev = newNode;
//         tail->next = tail->prev = newNode;
//         return;
//     }

//     if(pos == 1) {
//         insertHeadCircularDoubly(tail, head,data);
//         return;
//     }

//     if(pos >= getLencircularDouble(head)) {
//         insertTailCircularDoubly(tail, head, data);
//         return;
//     }


//     int i = 1;
//     Node* prevNode = head;
//     while(i < pos-1) {
//         prevNode = prevNode->next;
//         i++;
//     }

//     Node* newNode = new Node(data);
//     newNode->prev = prevNode;
//     newNode->next = prevNode->next;
//     prevNode->next->prev = newNode; // curr->prev = newNode
//     prevNode->next = newNode;
// }


// void deleteNodeCircularDoubly(Node*& tail, Node*& head, int pos) {
//     if(pos > getLencircularDouble(head)) {
//         cout << "Enter a valid position" << endl;
//         return;
//     }
//     if(head == NULL) {
//         cout << "L.L is already empty" << endl;
//         return;
//     }

//     if(pos == 1) {
//         Node* temp = head;
//         head = temp->next;
//         tail->next = head;
//         head->prev = tail; 
//         temp->next = NULL; 
//         temp->prev = NULL; 
  
//         delete temp; 
//         return;
//     }

//     if(pos >= getLencircularDouble(head)) {
//         Node* temp = tail;
//         tail = temp->prev;
//         tail->next = head;
//         head->prev = tail;
//         temp->next = NULL;
//         temp->prev = NULL;

//         delete temp;
//         return;
//     }

//     int i = 1;
//     Node* prevNode = head;
//     while(i < pos-1) {
//         prevNode = prevNode->next;
//         i++;    
//     }

//     Node*curr = prevNode->next;
//     prevNode->next = curr->next;
//     curr->next->prev = prevNode;
//     delete curr;
// }


////////////////////////////
// Functions
// Node* reverseUsingRecursion(Node*& prev, Node*& curr) {
//     if(curr == NULL) return prev;

//     Node* temp = curr->next;
//     curr->next = prev;
//     prev = curr;
//     return reverseUsingRecursion(prev, temp);
// }


Node* reverseUsingLoop(Node*& prev, Node*& curr) {
    while(curr != NULL) {
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}


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
Node* findMid2(Node*& head) {
    if(head == NULL) {
        cout << "Linked List is empty" << endl;
        return head;
    }

    if(head->next == NULL) return head;

    // if no. of nodes > 1
    Node* fast = head; // if you want mid = mid+1(in case of even) just do => Node* fast = head->next;
    Node* slow = head; 

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}



Node* reverseKgroups(Node*& head, int k) {
    if(head == NULL) return head;

    if(k > getLen(head)) return head;

    // length >= k
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while(count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // calling recursively to revrse other K groups and linking head of one k group to another
    if(forward != 0) {
        head->next = reverseKgroups(forward, k);
    }
    
    return prev;
}


// bool findLoop(Node*& head) {
//     if(head == NULL) return head;

//     Node* fast = head;
//     Node* slow = head;

//     while(fast != NULL) {
//         fast = fast->next;
//         if(fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if(fast == slow) return true;
//     }

//     return false;
// }


// Node* findStartingOfLoop(Node*& head) {
//     if(head == NULL) return head;

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL) {
//         fast = fast->next;
//         if(fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if(fast == slow) break;
//     }

//     slow = head;

//     while(slow != fast) {
//         fast = fast->next;
//         slow = slow->next;
//     }

//     return slow;
// }


// void removeLoop(Node*& head) {
//     if(head == NULL) return;

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL) {
//         fast = fast->next;
//         if(fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if(fast == slow) break;
//     }

//     slow = head;

//     Node* prev = NULL;
//     while(slow != fast) {
//         prev = fast;
//         fast = fast->next;
//         slow = slow->next;
//     }

//     prev->next = NULL;
//     return;    
// }




// bool checkPalindrome(Node*& head) {
//     if(head == NULL) return true;
//     if(head->next == NULL) return true;

//     int len = getLen(head);

//     // 1-: find mid
//     Node* fast = head;
//     Node* slow = head;

//     while(fast != NULL) {
//         fast = fast->next;
//         if(fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }

//     // mid = slow || fast
//     Node* mid = slow; // not necessary

//     // 2-: reverse either part of L.L(we are revrsing till mid)
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;

//     while(forward != mid) {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     // print(prev);
//     // cout << mid->next->data << endl;
    
//     // 3-: compare
//     if(len%2 != 0) mid = mid->next;

//     Node* temp = prev;
//     while(mid != NULL || temp != mid) {
//         if(mid->data != temp->data) return false;

//         temp = temp->next;
//         mid = mid->next;
//     }
//     return true;
// }



// Node* removeDuplicates(Node*& head) {
//     if(head == NULL) return head;

//     Node* temp = head;
//     while(temp != NULL && temp->next != NULL) {
//         if(temp->data != temp->next->data) temp = temp->next;

//         else {
//             Node* duplicate = temp->next;
//             temp->next = duplicate->next;
//             duplicate = NULL;
//             delete duplicate;
//         }
//     }
//     return head; 
// }



// Node* sort012s(Node*& head) {
//     // int zero = 0;
//     // int one = 0;
//     // int two = 0;

//     // Node* temp = head;
//     // while(temp != NULL) {
//     //     if(temp->data == 0) zero++;
//     //     else if(temp->data == 1) one++;
//     //     else if(temp->data == 2) two++;

//     //     temp = temp->next;
//     // }

//     // temp = head;
//     // while(temp != NULL) {
//     //     while(zero--) {
//     //         temp->data = 0;
//     //         temp = temp->next;
//     //     }

//     //     while(one--) {
//     //         temp->data = 1;
//     //         temp = temp->next;
//     //     }

//     //     while(two--) {
//     //         temp->data = 2;
//     //         temp = temp->next;
//     //     }
//     // }
//     // return head;


//     // (imp.) alternate-: without data replacement
//     // create 3 L.L for 0,1 and 2
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
    
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;

//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;


//     // 2-:  fill 3 L.L
//     Node* curr = head;
//     while(curr != NULL) {
//         if(curr->data == 0) {
//             // append the node with "0" in zeroHead L.L
//             zeroTail->next = curr;
//             zeroTail = curr;
//         }
 
//         else if(curr->data == 1) {
//             // append the node with "0" in zeroHead L.L
//             oneTail->next = curr;
//             oneTail = curr;
//         }
 
//         else if(curr->data == 2) {
//            // append the node with "0" in zeroHead L.L
//             twoTail->next = curr;
//             twoTail = curr;
//         }

//         // delete the node in original L.L
//         Node* temp = curr;
//         curr = curr->next;
//         temp->next = NULL;
//     }


//     // Join L.L's 
//     Node* temp = oneHead;
//     oneHead = oneHead->next;
//     temp->next = NULL;
//     delete temp;

//     temp = twoHead;
//     twoHead = twoHead->next;
//     temp->next = NULL;
//     delete temp;

//     if(oneHead != NULL) {
//         zeroTail->next = oneHead;
//         if(twoHead != NULL) oneTail->next = twoHead;
//     }
//     else {
//         if(twoHead != NULL) zeroTail->next = twoHead;
//     }

//     temp = zeroHead;
//     zeroHead = zeroHead->next;
//     temp->next = NULL;
//     delete temp;

//     return zeroHead;
// }



// Node* add(Node*& head1, Node*& head2) {
//     // create a L.L to store answer
//     Node* ansHead = NULL;
//     Node* ansTail = NULL;

//     // reverse both L.L
//     Node* prev = NULL;
//     Node* temp1 = reverseUsingLoop(prev, head1);
//     prev = NULL;
//     Node* temp2 = reverseUsingLoop(prev, head2);
    

//     // Adding
//     int carry = 0;
//     while(temp1 != NULL && temp2 != NULL) {
//         int sum = temp1->data + temp2->data + carry;
//         int digit = sum%10;
//         carry = sum/10;

//         // create a new node to store digit
//         Node* newNode = new Node(digit);

//         // attach the newNode to the answer L.L
//         if(ansHead == NULL) {
//             ansHead = newNode;
//             ansTail = newNode;
//         }
//         else  {
//             ansTail->next = newNode;
//             ansTail = newNode;
//         }

//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }

//     // when temp1 length > temp2 length
//     while(temp1 != NULL) {
//         int sum = temp1->data + carry;
//         int digit = sum%10; 
//         carry = sum/10;

//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode; 
//         temp1 = temp1->next;
//     }

//     // when temp2 length > temp1 length
//     while(temp2 != NULL) {
//         int sum = temp2->data + carry;
//         int digit = sum%10; 
//         carry = sum/10;

//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode; 
//         temp2 = temp2->next;
//     }

//     // when carry is left
//     while(carry != 0) {
//         int digit = carry%10;
//         carry /= 10;
//         Node* newNode = new Node(digit);
//         ansTail->next = newNode;
//         ansTail = newNode;
//     }
    
//     prev = NULL;
//     return reverseUsingLoop(prev, ansHead);
// }



Node* merge(Node*& list1, Node*& list2) {
    if(list1 == NULL) return list1;
    if(list2 == NULL) return list2;

    Node* ansHead = new Node(-1);
    Node* ptr = ansHead;

    while(list1 != NULL && list2 != NULL) {
        if(list1->data <= list2->data) {
            ptr->next = list1;
            ptr = list1;
            list1 = list1->next;
        }
        else {
            ptr->next = list2;
            ptr = list2;
            list2 = list2->next;
        }
    }

    if(list1) ptr->next = list1;
    if(list2) ptr->next = list2;

    return ansHead->next;
}


Node* findMid(Node*& head) {
    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}


Node* sortList(Node* head) {
    if(head == NULL || head->next == NULL) return head;

    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL; // to seperate L.L(left->mid and mid.next->NULL)


    // break recursively
    left = sortList(left);
    right = sortList(right);

    // merge 2 lists
    Node* mergePtr = merge(left, right);
    return mergePtr;
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



/////////////////////////////////////
    // // Circular singly linked list


    // // Node*  first = new Node(10);
    // // Node*  second = new Node(20);
    // // Node*  third = new Node(30);
    // // Node*  fourth = new Node(40);

    // // first->next = second;
    // // second->next = third;
    // // third->next = fourth;
    // // fourth->next = first;


    // Node* tail = NULL;
    // // insertCircularHead(tail, 10);
    // // insertCircularHead(tail, 20);
    // // insertCircularHead(tail, 30);
    // // insertCircularHead(tail, 40);
    // // insertCircularHead(tail, 50);
    // // printCircular(tail->next);

    // insertCircularTail(tail, 10);
    // insertCircularTail(tail, 30);
    // insertCircularTail(tail, 40);
    // insertCircularTail(tail, 50);
    // printCircular(tail->next);

    
    // insertCircularAtPos(tail, 2, 20);
    // printCircular(tail->next); // to print we need head and head = tail->next
    // deleteNodeCircular(tail, 2);
    // printCircular(tail->next);

    // cout << "tail-: " << tail->data << endl;
    // cout << "head-: " << tail->next->data << endl;




/////////////////////////////////
// // circular doubly linked list
// Node* head = NULL;
// Node* tail = NULL;
// insertTailCircularDoubly(tail, head, 10);
// insertTailCircularDoubly(tail, head, 30);
// insertTailCircularDoubly(tail, head, 40);
// insertTailCircularDoubly(tail, head, 50);


// // printcircularDouble(head);

// insertAtPosCircularDoubly(tail, head, 2, 20);
// insertAtPosCircularDoubly(tail, head, 6, 60);

// printcircularDouble(head);
// cout << "head-: " << head->data << " tail-: " << tail->data << endl;

// deleteNodeCircularDoubly(tail, head, 4);
// printcircularDouble(head);
// cout << "head-: " << head->data << " tail-: " << tail->data << endl;






//////////////////////////
    // // Reverse L.L using recursion -: using singly L.L class Node
    Node* head = NULL; 
    Node* tail = NULL; 
    
    insertAtTail(tail, head, 1);
    insertAtTail(tail, head, 5);
    insertAtTail(tail, head, 6);
    // insertAtTail(tail, head, 7);
    // insertAtTail(tail, head, 91);
    // insertAtTail(tail, head, 6);

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



    // // Creating a L.L with a loop inside L.L
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);
    // Node* sixth = new Node(60);
    // Node* seventh = new Node(70);
    // Node* eight = new Node(80);
    // Node* nineth = new Node(90);


    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;
    // seventh->next = eight;
    // eight->next = nineth;
    // nineth->next = fifth;

    // // print(first);


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



    // // is palindrome-:
    // print(head);
    // cout << "Is this L.L a palindrome-: " << checkPalindrome(head);


    // // Remove duplicates from a sorted L.L and return head;
    // Node* temp = removeDuplicates(head);
    // print(temp);



    // // Sort 0,1's and 2's
    // Node*temp = sort012s(head);
    // print(temp);



    // // add 2 L.L
    // Node* head2 = NULL;
    // Node* tail2 = NULL;

    // insertAtTail(tail2, head2, 2);
    // insertAtTail(tail2, head2, 3);
    // insertAtTail(tail2, head2, 4);
    // print(head2);
    // print(head);

    // Node* temp = add(head, head2);
    // print(temp);


    // merge Two Sorted list
    Node* head2 = NULL;
    Node* tail2 = NULL;
    insertAtTail(tail2, head2, 8);
    insertAtTail(tail2, head2, 11);
    insertAtTail(tail2, head, 52);
    Node* mergePtr = merge(head, head2);
    print(mergePtr);


    // // sort using merge Sort
    // print(head);
    // Node* temp = sortList(head);
    // print(temp);

    return 0;
}