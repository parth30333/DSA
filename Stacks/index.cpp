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
// class Stack {
//     public:
//     int*arr;
//     int size; // this size is fixed, size != no. of elements, size = size of array
//     int top;

//     // Constructor
//     Stack(int size) {
//         this->size = size;
//         this->arr = new int[size];
//         this->top = -1;
//     }

//     // Methods
//     void push(int data) {
//         // check if empty
//         if(size-top > 1) {
//             top++;
//             arr[top] = data;
//         }
//         else cout << "Stack Overflow" << endl;
//     }

//     void pop() {
//         // check if there is atleast one element
//         if(top >= 0) top--;
//         else cout << "Stack Underflow" << endl;
//     }

//     int getTop() {
//         if(top < 0) cout << "Stack is empty" << endl;
//         else return arr[this->top];
//     }

//     int getSize() {
//         return this->top + 1; // returns no. of elements
//     }

//     bool isEmpty() {
//         if(top < 0) return true;
//         else return false;
//     }
// };


/////////////////////////////
// // 2 stacks in an array
// class Stack {
//     public:
//     int size;
//     int* arr;
//     int top1;
//     int top2;

//     Stack(int size) {
//         this->size = size;
//         this->arr = new int[size];
//         this->top1 = -1;
//         this->top2 = size;
//     }

//     void push1(int data) {
//         if(top2-top1 > 1) {
//             top1++;
//             arr[top1] = data;
//         }
//         else cout << "Overflow in stack 1" << endl;
//     }

//     void push2(int data) {
//         if(top2-top1 <= 1) cout << "Overflow in stack 2" << endl;
//         else {
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop1() {
//         if(top1 >= 0) {
//             arr[top1] = 0;
//             top1--;
//         }
//         else cout << "Underflow in stack 1" << endl;
//     }

//     void pop2() {
//         if(top2 < size) {
//             arr[top2] = 0;
//             top2++;
//         }
//         else cout << "Underflow in stack 2" << endl;
//     }

//     void print() {
//         cout << endl;
//         cout << "top1-: " << top1 << endl;  
//         cout << "top2-: " << top2 << endl;
//         for(int i=0; i<size; i++) cout << arr[i] << " ";
//         cout << endl;  
//     }
// };


//////////////////////////////////////
// Functions
// void findMidElement(stack<int>& s, int& totalSize) {
//     if(s.size() == 0) {
//         cout <<  "There is no element in stack" << endl;
//         return;
//     }
//     // B.C
//     if(totalSize/2 +1 == s.size()) {
//         cout << s.top() << endl;
//         return;    
//     }

//     int temp = s.top();
//     s.pop();

//     // recursive call
//     findMidElement(s, totalSize);

//     // Backtrack
//     s.push(temp);
// }


// void insertAtBottom(stack<int>& s,  int el) {
//     // B.C
//     if(s.empty()) {
//         s.push(el);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     // recursive call
//     insertAtBottom(s, el);
//     // Backtrack
//     s.push(temp);
// }


// void reverseStack(stack<int>& s) {
//     // B.C
//     if(s.empty()) return;


//     int target = s.top();
//     s.pop();

//     reverseStack(s);

//     insertAtBottom(s, target);
// }


// void insertSortedOrder(stack<int>& s, int target) {
//     if(s.empty()) {
//         s.push(target);
//         return;
//     }

//     if(s.top() >= target) {
//         s.push(target);
//         return;
//     }

//     int topEl = s.top();
//     s.pop();

//     // recursive call
//     insertSortedOrder(s, target);

//     // backtrack
//     s.push(topEl);
// }

// void sortStack(stack<int>& s) {
//     if(s.empty()) return;

//     int target = s.top();
//     s.pop();

//     sortStack(s);

//     insertSortedOrder(s, target);
// }


string checkRedundant(string& str) {
    stack<char> s;
    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(ch == ')' ) {
            char topEl = s.top();
            bool flag = true;

            while(!s.empty() && topEl != '(' ) {
                if(topEl == '+' || topEl == '-' ||
                   topEl == '*' || topEl == '/') {
                    flag = false;
                   }

                    topEl = s.top();
                    s.pop();    
            }
            if(flag) return "Yes"; // there are redundant brackets
        }
        else s.push(ch);
    }
    return "No";
}





int main() {
    // // STL Stack
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
    // // User-defined stack
    // // Creation
    // Stack s(10);

    // // Insertion
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);

    // // Print stack
    // while(!s.isEmpty()) {
    //     cout << s.getTop() << " ";
    //     s.pop();
    // }
    // cout << endl;


    // cout << "Size of stack = " << s.getSize() << endl;
    
    /////////////////////////////////
    // // 2 Stacks in an array
    // Stack s(10);

    // s.push1(10);
    // s.print();
    // s.push1(20);
    // s.print();
    // s.push1(30);
    // s.print();
    // s.push1(40);
    // s.print();
    // s.push1(50);
    // s.print();

    // s.push2(100);
    // s.print();
    // s.push2(110);
    // s.print();
    // s.push2(120);
    // s.print();
    // s.push2(130);
    // s.print();
    // s.push2(140);
    // s.print();
    // // s.push1(150);
    // // s.print();

    // s.pop1();
    // s.print();
    // s.pop1();
    // s.print();
    // s.pop1();
    // s.print();
    // s.pop1();
    // s.print();
    // s.pop1();
    // s.print();
    // // s.pop1();
    // // s.print();

    // s.push2(1010);
    // s.print();


/////////////////////////
// // Reverse string using stack
// stack<char> st;
// string s = "Parth";
// for(int i=0; i<s.length(); i++) {
//     st.push(s[i]);
// }

// while(!st.empty()) {
//     cout << st.top() << " ";
//     st.pop();
// }
// cout << endl;




// // find middle element of a stack
// stack<int>s;
// for(int i=1; i<=7; i++) {
//     s.push(i*10);
// }
// int size = s.size();
// findMidElement(s, size);


// // insert element at bottom
// stack<int>s;
// for(int i=1; i<=7; i++) {
//     s.push(i*10);
// }
// insertAtBottom(s, 11);
// while(!s.empty()) {
//     cout << s.top() << " ";
//     s.pop();
// }
// cout << endl;



// // reverse a stack
// stack<int>s;
// for(int i=1; i<=7; i++) {
//     s.push(i*10);
// }
// reverseStack(s);
// while(!s.empty()) {
//     cout << s.top() << " ";
//     s.pop();
// }
// cout << endl;



// // Sort a stack
// stack<int> s;
// s.push(7);
// s.push(9);
// s.push(5);
// s.push(11);
// s.push(2);


// sortStack(s);
// while(!s.empty()) {
//     cout << s.top() << " ";
//     s.pop();
// }
// cout << endl;


// Check redundant brackets in a expression
// string str = "((a+b))";
string str = "(a+b+(c+d))";

cout << checkRedundant(str);

    return 0;
}