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
// int maxArr(vector<int> arr, int i) {
//     if(i == arr.size()-1) return arr[i];

//     int ans  = max(arr[i], maxArr(arr, i+1));

//     return ans;
// }


// int findKey(vector<int> arr, int k, int i) {
//     if(i == arr.size()-1) return i;

//     if(arr[i] == k) return i;

//     return findKey(arr, k, i+1);
// }


// void printDigits(int n) {
//     if(n==0) return;

//     printDigits(n/10);
//     cout << n%10 << " ";
// }

// int binarySearch(vector<int>& arr, int s, int e, int k) {
//     if(s>e) return -1;

//     int mid = s+ (e-s)/2;

//     if(arr[mid] == k) return mid;

//     else if(arr[mid] < k) return binarySearch(arr, mid+1, e, k);
    
//     else return binarySearch(arr, s, mid-1, k);
// }


// void subsequenceStr(string s, int i, string output) {
//     if(i >= s.length()) {
//         cout << output << " ";
//         return;
//     }

//     // exclude
//     subsequenceStr(s, i+1, output);

//     // include
//     output.push_back(s[i]);
//     subsequenceStr(s,i+1,output);
// }


// int coinChange(vector<int>& arr,int target) {
//     if(target == 0) return 0;

//     if(target < 0) return INT_MAX;

//     int mini = INT_MAX;
//     for(int i=0; i<arr.size(); i++) {
//         int ans = coinChange(arr, target-arr[i]);
//         if(ans == INT_MAX) continue;

//         else mini = min(mini, ans+1);
//     }

//     return mini;
// }

// int maxSegments(int len, int x, int y, int z) {
//     if(len == 0) return 0;

//     if(len < 0) return INT_MIN;

//     int ans1 = maxSegments(len-x, x,y,z)+1;
//     int ans2 = maxSegments(len-y, x,y,z)+1;
//     int ans3 = maxSegments(len-z, x,y,z)+1;


//     return max(ans1, max(ans2, ans3));
// }


// int sumNonAdjacent(vector<int>& arr, int i) {
//     if(i >= arr.size()) return 0;

//     // include
//     int ans1 = arr[i] + sumNonAdjacent(arr, i+2);
    
//     // exclude
//     int ans2 = 0 + sumNonAdjacent(arr, i+1);

//     return max(ans1, ans2);
// }


// void lastOccurence(string& s,char& ch, int i, int& ans) {
//     if(i >= s.length()) return;

//     if(s[i] == ch) ans = i;

//     lastOccurence(s,ch,i+1, ans);
// }



// void reverseStr(string& s, int i, int j) {
//     if(i >= j) return;

//     swap(s[i], s[j]);
//     reverseStr(s,i+1, j-1);
// }


// void addStrings(string& num1,string& num2,string& ans, int i, int j, int carry) {
//     // B.C
//     if(i<0 && j<0) {
//         if(carry != 0) ans.push_back(carry + '0');
        
//         return;
//     }


//     // Process
//     int n1 = (i >=0 ? num1[i] : '0') - '0';
//     int n2 =  (j >= 0 ? num2[j]: '0') - '0';
//     int sum = n1+n2+carry;
//     int digit = sum%10;
//     carry = sum/10;
//     ans.push_back(digit+'0');

//     // relation
//     addStrings(num1, num2, ans, i-1, j-1, carry);

// }


// void printSubArray(vector<int>& arr, int i, vector<int> output) {
//     if(i >= arr.size()) {
//         for(auto x: output) cout << x << " ";
//         cout << endl;
//         return;
//     }

//     // exclude
//     printSubArray(arr, i+1, output);

//     // include
//     output.push_back(arr[i]);
//     printSubArray(arr, i+1, output);
// }



// void printSubArray_util(vector<int>& arr, int start, int end) {
//     // B.C
//     if(end == arr.size()) return;

//     // process
//     for(int i=start; i<=end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     // RE
//     printSubArray_util(arr, start, end+1);

// }


// void printSubArrayContionuous(vector<int>& arr) {
//     for(int  i=0; i<arr.size(); i++) {
//         printSubArray_util(arr, i, i);
//     }
// }


// int maxProfitBuySellStocks(vector<int>& arr, int maxPr, int lp, int i) {
//     // B.C
//     if(i>=arr.size()) return maxPr;

//     // process
//     if(arr[i] < lp) lp = arr[i];
//     int dailyPr = arr[i]-lp;
//     if(dailyPr > maxPr) maxPr = dailyPr;

//     // RE
//     maxProfitBuySellStocks(arr, maxPr, lp, i+1);
// }


int main() {
////////////////////////////////
// Recursion practice
////////////////////////////////

// // max array
// vector<int> arr = {3,4,131,6,9,21};
// cout << maxArr(arr, 0);


// // find key
// vector<int> arr = {3,5,1,9,31};
// int k = 31;
// cout << findKey(arr, k, 0);


// // print digits of a number
// int n = 123;

// printDigits(n);


// // BInary search
// vector<int> arr = {1,4,6,8,12,17};
// int k = 12;

// cout << binarySearch(arr, 0, arr.size()-1, k);


// // print subsequence of a string
// string s = "abc";

// subsequenceStr(s, 0, "");



// // Coin change(leetcode)
// vector<int> arr = {1,2,3,4,5};
// int target = 9;

// cout << coinChange(arr, target);


// // max segments of  a rod
// int len = 9;

// cout << maxSegments(len, 3,2,2);


// // Sum of non-adjacent elements 
// vector<int> arr = {1,3,7,9,4,5};

// cout << sumNonAdjacent(arr, 0);



// // Last occurence of a character in a string
// string s = "abcddedg";
// char ch = 'd';
// int ans = -1;

// lastOccurence(s,ch, 0, ans);
// cout << ans;


// // reverse string
// string s = "abc";
// reverseStr(s, 0, s.length()-1);

// cout << s;


// // Add strings
// string num1 = "123";
// string num2 = "11";
// string ans = "";

// addStrings(num1,num2, ans, num1.length()-1, num2.length()-1, 0); 


// reverse(ans.begin(), ans.end());
// cout << ans;


// // Print all sub-arrays
// vector<int> arr = {1,2,3,4,5};
// vector<int> output;
// printSubArray(arr, 0, output);



// // Print all continuous sub-array
// vector<int> arr = {1,2,3,4,5};

// printSubArrayContionuous(arr);


// // Buy and sell stocks
// vector<int> prices = {7,1,5,3,6,4};
// int maxPr = INT_MIN;

// cout << maxProfitBuySellStocks(prices, maxPr, prices[0], 0);


return 0;   
}