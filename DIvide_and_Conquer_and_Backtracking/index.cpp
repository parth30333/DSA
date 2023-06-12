#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<numeric>
#include<string>
#include<cmath>
#include<map>
#include<unordered_map>

using namespace std;

// Functions
// void merge(vector<int>& arr, int s, int e) {
//     int mid = s + (e-s)/2;
//     int len1 = mid-s + 1;
//     int len2 = e-mid;

//     // create 2 array
//     int* left = new int[len1];
//     int* right = new int[len2];

//     // Fill out left array
//     int k = s;
//     for(int i=0; i<len1; i++) left[i] = arr[k++];


//     // Fill out right array
//     k = mid+1;
//     for(int i=0; i<len2; i++) right[i] = arr[k++];


//     int mainIndex = s;
//     int leftIndex = 0;
//     int rightIndex = 0;

//     while(leftIndex < len1 && rightIndex < len2) {
//         if(left[leftIndex] < right[rightIndex]) arr[mainIndex++] = left[leftIndex++];
        
//         else arr[mainIndex++] = right[rightIndex++];
//     }


//     // In Case, any of the array is shorter than the other
//     // when right = shorter, then copy remaining elements in left into main array
//     while(leftIndex < len1) arr[mainIndex++] = left[leftIndex++];


//     // when left = shorter, then copy remaining elements in right into main array
//     while(rightIndex < len2) arr[mainIndex++] = right[rightIndex++];
// }


// void mergeSort(vector<int>& arr, int s, int e) {
//     // B.C
//     if(s >= e) return;


//     // Relation 
//     int mid = s + (e-s)/2;

//     // Breaking main array phase
//     // call for first half of array
//     mergeSort(arr, s, mid);

//     // call for other half of array
//     mergeSort(arr, mid+1, e);


//     // merge arrays
//     merge(arr, s, e);
// }


// int partition(vector<int>& arr, int s, int e) {
//     // Select pivot element and index
//     int pivotind = s;
//     int pivotEl = arr[s];
    
//     // find pivot element correct position
//     int count = 0;
//     for(int i=s+1; i<=e; i++) if(arr[i] <= pivotEl) count++;

//     swap(arr[pivotind], arr[s+count]);
//     pivotind = s+count;

//     // Make sure every element on left <= pivot and every element on right > pivot
//     int i = s;
//     int j = e;

//     while(i < j) {
//         while(arr[i] <= pivotEl) i++;

//         while(arr[j] > pivotEl) j--;

//         // swap if there is a wrong element on both sides(left, right)
//         if(i < j) swap(arr[i], arr[j]);
//     }

//     return pivotind;
// }



// void quickSort(vector<int>& arr, int s, int e) {
//     // B.C
//     if(s >= e) return;

//     // find Pivot Index
//     int piv = partition(arr, s, e);

//     // Recursive calls
//     // call for left part
//     quickSort(arr, s, piv-1);

//     // call for right part
//     quickSort(arr, piv+1, e);
// }


// void permutationOfStr(string s, int i) {
//     // B.C
//     if(i >= s.length()) {
//         cout << s << " ";
//         return;
//     }

//     for(int j=i; j<s.length(); j++) {
//         swap(s[i], s[j]);

//         // RE
//         permutationOfStr(s,i+1);

//         // Back-tracking
//         swap(s[i], s[j]);
//     }
// }


// bool isSafe(vector<vector<int>>& m, int i, int j, vector<vector<bool>>& visited, int n) {
//     if(((i>=0 && i<n) && (j>=0 && j<n)) &&
//         (m[i][j] != 0) && 
//         (visited[i][j] != true)) {
//             return true;
//         }
//         return false;
// }



// void solveMaze(vector<vector<int>>& m, int i, int j, vector<string>& path, vector<vector<bool>>& visited, int n, string output) {
//     // B.C
//     if(i == n-1 && j == n-1) {
//         path.push_back(output);
//         return;
//     }

//     // call for each direction
//     // for Right = j+1
//     if(isSafe(m, i, j+1, visited, n)) {
//         // mark visited
//         visited[i][j+1] = true;
//         solveMaze(m, i, j+1, path, visited, n, output+'R');
//         // Backtrack
//         visited[i][j+1] = false;
//     }

//     // for left = j-1
//     if(isSafe(m, i, j-1, visited, n)) {
//         // mark visited
//         visited[i][j-1] = true;
//         solveMaze(m, i, j-1, path, visited, n, output+'L');
//         // Backtrack
//         visited[i][j-1] = false;
//     }

//     // for UP = i-1
//     if(isSafe(m, i-1, j, visited, n)) {
//         // mark visited
//         visited[i-1][j] = true;
//         solveMaze(m, i-1, j, path, visited, n, output+'U');
//         // Backtrack
//         visited[i-1][j] = false;
//     }

//     // for Down = i+1
//     if(isSafe(m, i+1, j, visited, n)) {
//         // mark visited
//         visited[i+1][j] = true;
//         solveMaze(m, i+1, j, path, visited, n, output+'D');
//         // Backtrack
//         visited[i+1][j] = false;
//     }
// }


// //// N-Queen
// void printSolution(vector<vector<char>> board, int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << endl;
// }

// unordered_map<int, bool> row_check;
// unordered_map<int, bool> bottomLeftDiagonal;
// unordered_map<int, bool> topLeftDiagonal;



// bool isSafe(vector<vector<char>> board, int row, int col, int n) {
//     // Queen can move diagonally, up, down, left, right
//     // Now we have to check if the path created by previous Queens is clear or not -:  Since we are placing every Queen in new Column we don't have to check "up and down"
//     //                                                                                 instead of checking right side seperately we can check left, up Diagonal 
//     //                                                                                 and bottom diagonal  these 3 will cover every direction


//     // // is left clear
//     // int i = row;
//     // int j = col;
//     // while(j >= 0) {
//     //     if(board[i][j] == 'Q') return false;
//     //     j--;
//     // }

//     // // Bottom Diagonal
//     // i = row, j = col;
//     // while(j >= 0 && i < n) {
//     //     if(board[i][j] == 'Q') return false;
//     //     i++;
//     //     j--;
//     // }

//     // // up diagonal
//     // i = row, j = col;
//     // while(j >= 0 && i >=0) {
//     //     if(board[i][j] == 'Q') return false;
//     //     i--;
//     //     j--;
//     // }

//     // return true;


//     // Optimal approach using map
//     // left row check
//     if(row_check[row] == true) return false;


//     // bottom-left-diagonal
//     if(bottomLeftDiagonal[row+col] == true) return false;

//     // top-left-diagonal
//     if(topLeftDiagonal[n-1+col-row] == true) return false;

//     return true;
// }

// void solveN_Queen(vector<vector<char>> board, int n, int col) {
//     // B.C
//     if(col >= n) {
//         printSolution(board, n);
//         return;
//     }

//     // Process -: we have to to check for placing queen at every column. so, we will use a for-loop
//     for(int row = 0; row < n; row++) {
//         if(isSafe(board, row, col,n)) {
//             // marking Queen placed
//             board[row][col] = 'Q';

//             row_check[row] = true;
//             bottomLeftDiagonal[row+col] = true;
//             topLeftDiagonal[n-1+col-row] = true;

//             // Recursive call
//             solveN_Queen(board, n, col+1);

//             // backtrack (if solution is not found) 
//             board[row][col] = '-'; 

//             row_check[row] = false;
//             bottomLeftDiagonal[row+col] = false;
//             topLeftDiagonal[n-1+col-row] = false;
//         }
//     }
// }


// void generateParanthesis(int n, vector<string>& ans, int open, int close, string output) {
//     // B.C
//     if(open == 0 && close == 0) {
//         ans.push_back(output);
//         return;
//     }

//     // Relation
//     // include '('
//     if(open > 0) {
//         output.push_back('(');
//         generateParanthesis(n, ans, open-1, close, output);

//         // backtrack
//         output.pop_back();
//     }

//     // include ')'
//     if(close > open) {
//         output.push_back(')');
//         generateParanthesis(n, ans, open, close-1, output);

//         // backtrack
//         output.pop_back();
//     }
// }


// void letterCombinations(string n, map<char, string>& mp, vector<string>& ans, int index, string output) {
//     // B.C
//     if(index >= n.length()) {
//         ans.push_back(output);
//         return;
//     }

//     // Process
//     char digit = n[index];
//     string value = mp[digit];
//     for(int i=0; i<value.length(); i++) {
//         output.push_back(value[i]);
//         letterCombinations(n, mp, ans, index+1, output);

//         // backtracking-: if you can't understand why backtracking is used, DRY RUN to understand
//         output.pop_back(); 

//     }
// }


bool isSafe(vector<vector<char>>& board, int row, int col, int x) {
    // row check
    for(int i=0; i<9; i++) {
        if(board[i][col] == x) return false;
    }

    for(int i=0; i<9; i++) {
        if(board[row][i] == x) return false;
    }

    for(int i=0; i<9; i++) {
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == x) return false;
    }

    return true;
}



bool sudokuSolver(vector<vector<char>>& board) {
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[0].size(); j++) {
            
            // if cell is not filled
            if(board[i][j] == '.') {
            
                for(char k='1'; k<='9'; k++) {
                    if(isSafe(board, i, j, k)) {
                        board[i][j] = k;

                        // next recursion will handle
                        bool isValidSolution = sudokuSolver(board);

                        if(isValidSolution == true) return true;

                        else {
                            // Backtrack
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    // when entire box is filled
    return true;
}

int main() {

// // Merge Sort    
// // vector<int> arr = {4,13,52,8,31};
// vector<int> arr = {4,13,52,8,31,1,7};

// mergeSort(arr, 0, arr.size()-1);

// for(auto x: arr) cout << x << " ";
// cout << endl;



// // Quick Sort
// vector<int> arr = {4,13,52,8,31,1,7};

// quickSort(arr, 0, arr.size()-1);

// for(auto x: arr) cout << x << " ";


//////////////////
// Back-tracking
/////////////////

// // Permutation of a string
// string s = "abc";

// permutationOfStr(s, 0);


// // (v.imp)Rat in a maze
// vector<vector<int>> m = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};

// int n = 4; 
// vector<string> path;
// string output = "";

// if(m[0][0] == 0) return 0;

// vector<vector<bool>> visited(n, vector<bool>(n,false));
// visited[0][0] = true;
// solveMaze(m, 0, 0, path, visited, n, output);
// if(path.size() == 0) return 0;

// for(auto x: path) cout << x << " ";



// // (v.imp) n-Queen
// int n = 4;
// vector<vector<char>> board(n, vector<char>(n,'-'));

// solveN_Queen(board, n, 0);



// // Generate paranthesis
// int n = 3;
// vector<string> ans;
// int open = n;
// int close = n;
// string output = "";

// generateParanthesis(n, ans, open, close, output);

// for(auto x: ans) cout << x << " ";



// // Letter combinations of a phone number
// string n = "23";
// vector<string> ans;
// map<char, string> mp;

// mp['2'] = "abc";
// mp['3'] = "def";
// mp['4'] = "ghi";
// mp['5'] = "jkl";
// mp['6'] = "mno";
// mp['7'] = "pqrs";
// mp['8'] = "tuv";
// mp['9'] = "wxyz";

// int index = 0;
// string output = "";
// letterCombinations(n, mp, ans, index, output);


// for(auto x: ans) cout << x << " ";
// cout << endl;


// Sudoku Solver
vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};

if(sudokuSolver(board)) {
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[i].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}



return 0;
}