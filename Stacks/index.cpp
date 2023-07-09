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
#include<stack>

using namespace std;

// Classes
class Stack {
    public:
    int*arr;
    int size; // this size is fixed, size != no. of elements, size = size of array
    int top;

    // Constructor
    Stack(int size) {
        this->arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    // Methods
    void push(int data) {
        // check if empty
        if(size-top > 1) {
            top++;
            arr[top] = data;
        }
        else cout << "Stack Overflow" << endl;
    }

    void pop() {
        // check if there is atleast one element
        if(top >= 0) top--;
        else cout << "Stack Underflow" << endl;
    }

    int getTop() {
        if(top < 0) cout << "Stack is empty" << endl;
        else return arr[this->top];
    }

    int getSize() {
        return this->top + 1; // this returns no. of elements
    }

    bool isEmpty() {
        if(top < 0) return true;
        else return false;
    }
};


// Functions

int main() {
    // STL Stack
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // st.pop();

    // cout << "Size-: " << st.size() << endl;

    // cout << "Top of the stack looks like-: " << st.top() << endl;

    // if(st.empty()) cout << "Stack is empty" << endl;
    // if(!st.empty()) cout << "Stack is not empty" << endl;

    // while(!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

//////////////////////////////////
    // User-defined stack
    // Creation
    Stack s(10);

    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Print stack
    while(!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;


    cout << "Size of stack = " << s.getSize() << endl;
    return 0;
}