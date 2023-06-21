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
// Classes and functions
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


void insertAtTail(Node*& tail, int data) {
    // 1
    Node* newNode = new Node(data);

    // 2
    if(tail == NULL) tail = newNode;
    else tail->next = newNode;

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
        insertAtTail(tail, data);
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
    cout << "len-:" << len << endl;
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




int main() {
    // Node* head = new Node(10); // L.L => 60 50 40 20 10
    Node* head = NULL; // when insert At head L.L => 60 50 40 20
    Node* tail = NULL; 
    
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail,  50);
    insertAtTail(tail, 85);


    print(head);

    // cout << endl;
    // cout << "head-: " << head->data << endl;
    // cout << "tail-: " << tail->data << endl;
    
    // cout << "Inserting at a position" << endl;
    // insertAtPosition(head, tail, 101, 4);
    
    // print(head);
    // cout << endl;
    // cout << "head-: " << head->data << endl;
    // cout << "tail-: " << tail->data << endl;


    // deletion
    deleteNode(head, tail, 2);
    print(head);
    cout << "head-: " << head->data << endl;
    cout << "tail-: " << tail->data << endl;
    return 1;
}