#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<string>
#include<cstring>
#include<unordered_map>
#include<map>
#include<numeric>

using namespace std;



// Functions-:
// vector<int> majorityElemen2(vector<int> arr) {
//     map<int , int> mp;
//     for(auto x: arr) mp[x]++;

//     vector<int> temp;
//     for(int i=0; i<arr.size(); i++) {
//         if(mp[arr[i]] > arr.size()/3) {
//             temp.push_back(arr[i]);
//             mp[arr[i]] = 0;
//         }
//     }
//     return temp;
// }


// void addStr(string& s1, int n1, string& s2, int n2, string& ans, int carry) {
//     // B.C
//     if(n1 < 0 && n2 < 0) {
//         if(carry != 0) ans.push_back(carry);
//         return;        
//     }


//     int num1 = (n1 >= 0 ? s1[n1] : '0') - '0';
//     int num2 = (n2 >= 0 ? s2[n2] : '0') - '0';
//     int sum = num1+num2+carry;
//     int digit = sum % 10;
//     ans.push_back(digit+'0');
//     addStr(s1, n1-1, s2, n2-1, ans, sum/10);
// }


// void  util(vector<int>& arr, int start, int end) {
//     if(end >= arr.size()) return;

//     for(int i=start; i<=end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     util(arr, start, end+1);
// }

// void printSubArr(vector<int>& arr) {
//     for(int i=0; i<arr.size(); i++) util(arr, i, i);
// }


// void printSubArr2(vector<int>& arr, vector<int> output, int i) {
//     if(i >= arr.size()) {
//         for(auto x: output) cout << x << " ";
//         cout << endl;
//         return;
//     }

//     // exclude
//     printSubArr2(arr, output, i+1);

//     //include
//     output.push_back(arr[i]);
//     printSubArr2(arr, output, i+1);
// }


// string integerToWords(int n) {
//     vector<pair<int, string>> v = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9,"Nine"}, {8,"Eight"}, {7,"Seven"}, {6,"Six"}, {5,"Five"}, {4,"Four"}, {3,"Three"}, {2,"Two"}, {1,"One"}};

//     for(auto it: v) {
//         if(n >= it.first) {
//             string a = "";
//             if(it.first >= 100) {
//                a = integerToWords(n/it.first) + " ";
//             }

//             string b = it.second ;

//             string c = "";
//             if(n % it.first != 0) {
//                 c = " " + integerToWords(n % it.first);
//             }
//             return a+b+c;
//         }
//     }
//     return "";
// }


// bool wildCardMatching(string& s, int s1, string& p, int p1) {
//     // B.C
//     if(s1 == s.length() && p1 == p.length()) return true;

//     if(s1 == s.length() && p1 < p.length()) {
//         while(p1 < p.length()) {
//             if(p[p1] != '*') return false;
//             p1++;
//         }
//         return true;
//     }


//     if(s[s1] == p[p1] || p[p1] == '?') return wildCardMatching(s, s1+1, p, p1+1);


//     if(p[p1] == '*') {
//         // exclude
//         bool case1 = wildCardMatching(s, s1, p, p1+1);
//         bool case2 = wildCardMatching(s, s1+1, p, p1);

//         return case1 || case2;
//     }

//     return false;

// }


// int minCostTickets(vector<int>& days, vector<int>& cost, int i) {
//     if(i >= days.size()) return 0;

//     // 1 day pass
//     int cost1 = cost[0] + minCostTickets(days, cost, i+1);

//     // 7 day pass
//     int passEndDay = days[i]+7-1;
//     int j = i;
//     while(j < days.size() && days[j] <= passEndDay) j++;

//     int cost2 = cost[1] + minCostTickets(days, cost, j);

//     // 30 day pass
//     passEndDay = days[i] + 30 - 1;
//     j = i;
//     while(j < days.size() && days[j] <= passEndDay) j++;

//     int cost3 = cost[2] + minCostTickets(days, cost, j);

//     return min(cost1, min(cost2, cost3));
// } 


// void merge(vector<int>& arr, int s , int e, int mid) {
//     int len1 = mid-s+1;
//     int len2 = e-mid;

//     int *left = new int(len1);  
//     int *right = new int(len2);

//     int j = s;
//     for(int i=0; i<len1; i++) left[i] = arr[j++];

//     j = mid+1;
//     for(int i=0; i<len2; i++) right[i] = arr[j++];

//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainIndex = s;

//     while(leftIndex < len1 && rightIndex < len2) {
//         if(left[leftIndex] < right[rightIndex]) arr[mainIndex++] = left[leftIndex++];

//         else arr[mainIndex++] = right[rightIndex++];
//     }

//     while(leftIndex < len1) arr[mainIndex++] = left[leftIndex++];

//     while(rightIndex < len2) arr[mainIndex++] = right[rightIndex++];

// }


// void mergeSort(vector<int>& arr, int s, int e) {
//     if(s >= e) return;

//     int mid = s + (e-s)/2;
//     mergeSort(arr, s, mid);

//     mergeSort(arr, mid+1, e);

//     merge(arr, s , e, mid);
// }


// int pivot(vector<int>& arr, int s, int e) {
//     int count = 0;
//     int pivotIndex = s;
//     for(int i=s+1; i<=e; i++) {
//         if(arr[pivotIndex] > arr[i]) count++;  
//     } 

//     swap(arr[pivotIndex], arr[count+s]);
//     pivotIndex = count+s;

//     int i = s;
//     int j = e;

//     while(i < j) {
//         while(arr[i] <= arr[pivotIndex]) i++;
//         while(arr[j] > arr[pivotIndex]) j--;

//         if(i < j) swap(arr[i], arr[j]);
//     }
//     return pivotIndex;
// }



// void quickSort(vector<int>& arr, int s, int e) {
//     // B.C
//     if(s >= e) return;

//     int pivotInd = pivot(arr, s, e);

//     quickSort(arr, s, pivotInd-1);

//     quickSort(arr, pivotInd+1, e);
// }



// void permutationStr(string& s, int i) {
//     if(i >= s.length()) {
//         cout  << s << " ";
//         return;
//     }

//     for(int j=i; j<s.length(); j++) {
//         swap(s[i], s[j]);

//         permutationStr(s, i+1);

//         swap(s[i], s[j]);
//     }
// }



// bool isSafe(vector<vector<int>>& m, vector<vector<bool>>& visited, int i, int j, int n) {
//     if(((i>=0 && i<n) && (j>=0 && j<n)) &&
//        (m[i][j] != 0) &&
//        (visited[i][j] != true)) {
//         return true;
//        }

//     return false;
// }

// void ratInAMaze(vector<vector<int>>& m, string output, vector<string>& path, vector<vector<bool>>& visited, int i, int j, int n) {
//     if(i == n-1 && j == n-1) {
//         path.push_back(output);
//         return;
//     }

//     // call for each direction
//     // left = j-1
//     if(isSafe(m, visited, i, j-1, n)) {
//         visited[i][j-1] = true;
//         ratInAMaze(m, output+'L', path, visited, i, j-1, n);

//         // backtrack
//         visited[i][j-1] = false;
//     }

//     // right = j+1
//     if(isSafe(m, visited, i, j+1, n)) {
//         visited[i][j+1] = true;
//         ratInAMaze(m, output+'R', path, visited, i, j+1, n);

//         // backtrack
//         visited[i][j+1] = false;
//     }

//     // down = i+1
//     if(isSafe(m, visited, i+1, j, n)) {
//         visited[i+1][j] = true;
//         ratInAMaze(m, output+'D', path, visited, i+1, j, n);

//         // backtrack
//         visited[i+1][j] = false;
//     }

//     // Up = i-1
//     if(isSafe(m, visited, i-1, j, n)) {
//         visited[i-1][j] = true;
//         ratInAMaze(m, output+'U', path, visited, i-1, j, n);

//         // backtrack
//         visited[i-1][j] = false;
//     }
// }



// N-Queen
// void printSolution(vector<vector<char>>& board, int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << endl << endl;
// }

// map<int, bool> row_check;
// map<int, bool> bottomDiagonal;
// map<int, bool> topDiagonal;


// bool isSafe(vector<vector<char>>& board, int row, int col, int n) {
//     // // left
//     // int i = row; 
//     // int j = col;
//     // while(j >= 0) {
//     //     if(board[i][j--] == 'Q') return false;
//     // }

//     // // bottom left diagonal
//     // j = col;
//     // while(i < n && col >= 0) {
//     //     if(board[i++][j--] == 'Q') return false;
//     // }

//     // // top left diagonal
//     // i = row, j = col;
//     // while(i >= 0 && j >= 0) {
//     //     if(board[i--][j--] == 'Q') return false;
//     // }

//     // return true;
//     if(row_check[row] = 'Q') return false;

//     if(bottomDiagonal[row+col] == 'Q') return false;

//     if(topDiagonal[n-1+col-row] == 'Q') return false;

//     return true;
// }

// void solveN_Queen(vector<vector<char>>& board, int n, int col) {
//     if(col >= n) {
//         printSolution(board, n);
//         return;
//     }

//     for(int row=0; row<n; row++) {
//         if(isSafe(board, row, col, n)) {
//             board[row][col] = 'Q';
//             solveN_Queen(board, n, col+1);

//             // backtrack
//             board[row][col] = '-';
//         }
//     }
// }


// void generateParantheses(vector<string>& ans, string output, int open, int close) {
//     if(open == 0 && close ==0) {
//         ans.push_back(output);
//         return;
//     }

//     // include "("
//     if(open > 0) {
//         output.push_back('(');
//         generateParantheses(ans, output, open-1, close);

//         // backtrack
//         output.pop_back();
//     }

//     // include ")"
//     if(close > open) {
//         output.push_back(')');
//         generateParantheses(ans, output, open, close-1);

//         // backtrack
//         output.pop_back();
//     }
// }


// void letterCombinations(string n, vector<string>& ans, string temp, map<char, string>& mp, int  index) {
//     if(index >= n.length()) {
//         ans.push_back(temp);
//         return;
//     }

//     char digit = n[index];
//     string value = mp[digit];
//     for(int i=0; i<value.length(); i++) {
//         temp.push_back(value[i]);
//         cout << temp << endl;
//         letterCombinations(n, ans, temp, mp, index+1);

//         // backtrack
//         temp.pop_back();
//     }
// }

// bool isSafe(vector<vector<char>>& board, int row, int col, int x) {
//     // row-wise
//     for(int i=0; i<9; i++) {
//         if(board[i][col] == x) return false;
//     }

//     // column-wise
//     for(int i=0; i<9; i++) {
//         if(board[row][i] == x) return false;
//     }

//     // Sub-matrix wise
//     for(int i=0; i<9; i++) {
//         if(board[3*(row/3) + i/3][3*(col/3) + i%3] == x) return false;
//     }

//     return true;
// }



// bool sudokuSolver(vector<vector<char>>& board) {
//     for(int i=0; i<board.size(); i++) {
//         for(int j=0; j<board[0].size(); j++) {
//             if(board[i][j] == '.') {

//                 for(char k='1'; k<='9'; k++) {
//                     if(isSafe(board, i, j, k)) {
//                         board[i][j] = k;

//                         bool isValidSolution = sudokuSolver(board);
//                         if(isValidSolution == true) return true;

//                         else {
//                             // backtrack
//                             board[i][j] = '.';
//                         }                        
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }


class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout <<  "Deleting Node with value = " << this->data << endl;
    }
};


Node* reverseLinkedList(Node*& prev, Node*& curr) {
    if(curr == NULL) return prev;

    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    return reverseLinkedList(prev, forward);
}


int main() {
// // Majority Element 2
// vector<int> arr = {3,2,3};

// vector<int> temp = majorityElemen2(arr);

// for(auto x: temp)  cout << x << " ";
// cout << endl;


// // Add Strings
// string num1 = "123";
// string num2 = "11";
// string ans = "";

// addStr(num1, num1.length()-1, num2, num2.length()-1,  ans, 0);
// reverse(ans.begin(), ans.end());
// cout << ans << endl;


// // Print all continuous sub-arrays
// vector<int> arr = {1,2,3,4,5};

// printSubArr(arr);



// // print all sub-arrays
// vector<int> arr = {1,2,3,4,5};


// printSubArr2(arr, {}, 0);



// // Integer to English Words
// int n = 1234;

// cout << integerToWords(n);



// // wild card matching
// string s = "aa";
// string p = "?a";

// cout << wildCardMatching(s, 0, p, 0);


// // min cost tickets
// vector<int> days = {1,4,6,7,8,20};
// vector<int> cost = {2,7,15};

// cout << minCostTickets(days, cost, 0);



// // Merge Sort
// vector<int> arr = {4,12,7,9,1,2};

// mergeSort(arr, 0, arr.size()-1);


// for(auto x: arr) cout << x << " ";
// cout << endl;



// // Quick Sort
// vector<int> arr = {4,12,7,9,1,2};

// quickSort(arr, 0, arr.size()-1);

// for(auto x: arr) cout << x << " ";
// cout << endl;


// // all the permutations of String
// string s = "abc";

// permutationStr(s, 0);



// // Rat in a maze
// vector<vector<int>> m = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
// int n = 4;
// if(m[0][0] == false) return 0;
// string output = "";
// vector<string> path;
// vector<vector<bool>> visited(n, vector<bool>(n, false));

// ratInAMaze(m, output, path, visited, 0, 0, n);

// if(path.size() == 0) {
//      cout <<  "No path possible" << endl;
//     return 0;
// }

// for(auto x: path) cout << x << " ";



// // n-Queen
// int n = 4;
// vector<vector<char>> board(n, vector<char>(n, '-'));

// solveN_Queen(board, n, 0);



// // Generate parantheses
// int n = 3;
// vector<string> ans;
// string output = "";

// generateParantheses(ans, output, n, n);

// for(auto x: ans) cout << x << " ";


// // Letter combinations of phone number
// string n = "23";
// vector<string> ans;
// string temp = "";
// map<char, string> mp;
// mp['2'] = "abc";
// mp['3'] = "def";
// mp['4'] = "ghi";
// mp['5'] = "jkl";
// mp['6'] = "mno";
// mp['7'] = "pqrs";
// mp['8'] = "tuv";
// mp['9'] = "wxyz";

// letterCombinations(n, ans, temp, mp, 0);

// for(auto x: ans) cout << x << " ";


// // Sudoku Solver
// vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};


// if(sudokuSolver(board)) {
//     for(int i=0; i<board.size(); i++) {
//         for(int j=0; j<board[0].size(); j++) {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//////////////////////////////
// linked list
Node*  first = new Node(10);
Node*  second = new Node(20);
Node*  third = new Node(30);
Node*  fourth = new Node(40);
Node*  fifth = new Node(50);

first->next = second;
second->next = third;
third->next = fourth;
fourth->next = fifth;
fifth->next = NULL;

Node* prev = NULL;
Node* curr = first;

Node* head = reverseLinkedList(prev, curr);
cout << head->data << endl;

return 0;   
}
