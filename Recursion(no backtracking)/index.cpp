#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<numeric>
#include<string>
#include<cmath>
#include<map>

using namespace std;

// Functions
// int factorial(int n) {
//     if(n==1) return 1;
//     int ans = n*factorial(n-1);
//     return ans;
// }

// void print(int n) {
//     if(n==0) return;

//     print(n-1);
//     cout << n << " ";
// }

// void printReverse(int n) {
//     if(n==0) return;

//     cout << n << " ";
//     print(n-1);
// }

// int power2(int n) {
//     if(n==1) return 2;

//     int ans = 2*power2(n-1);
//     return ans;
// }

// int fibonacci(int n) {
//     // if(n==1) return 0;
//     // if(n==2)  return 1;
    
//     // alternate way of writing above 2 B.C
//     if(n==1 || n==2) {
//         return n-1;
//     }

//     int ans = fibonacci(n-1) + fibonacci(n-2);
//     return ans;
// }

// int climbStairs(int n) {
//     if(n==1 || n==2) return n;

//     return climbStairs(n-1) + climbStairs(n-2);
//     // above solution gives TLE on leetcode
// }


// int minArray(vector<int> arr, int i) {
//     // if(arr.size() == 1) return arr[0];

//     // int temp = arr[0];
//     // arr.erase(arr.begin());
//     // int ans = min(temp, minArray(arr));
//     // return ans;

//     // alternate
//     if(i == arr.size()-1) return arr[i];

//     int ans = min(arr[i], minArray(arr, i+1));
//     return ans;
// }


// int maxArray(vector<int> arr, int i) {
//     // if(arr.size() == 1) return arr[0];

//     // int temp = arr[0];
//     // arr.erase(arr.begin());
//     // int ans = max(temp, maxArray(arr));
//     // return ans;


//     // alternate
//     if(i == arr.size()-1) return arr[i];

//     int ans = max(arr[i], minArray(arr, i+1));
//     return ans;
// }


// void maxArray2(vector<int>& arr, int i, int& maxi) {
//     if(i == arr.size()) return;

//     if(arr[i] > maxi) maxi = arr[i];

//     maxArray2(arr, i+1, maxi);
// }

// int findKey(vector<int>& arr, int k, int i) {
//     if(i == arr.size()) return -1;

//     if(arr[i] == k) return i;

//     return findKey(arr, k, i+1);
// }


// void digits(int n, vector<int>& arr) {
//     if(n==0) return;

//     digits(n/10, arr);
//     arr.push_back(n%10);
// }


// bool isSorted(vector<int> &arr, int i) {
//     if(i==arr.size()-1) return true;

//     if(arr[i] > arr[i+1]) return false;

//     return isSorted(arr, i+1);
// }


// int binarySearch(vector<int> &arr,int k, int s, int e) {
//     int mid = s + (e-s)/2; 

//     // B.C (1)
//     if(s>e) return -1;

//     // B.C (2)
//     if(arr[mid] == k) return mid;
    
    
//     if(arr[mid] > k) return binarySearch(arr, k, s, mid-1);
//     else return binarySearch(arr, k, mid+1, e);    
// }


// void subsequenceSTR(string s, int i, string output) {
//     // B.C
//     if(i==s.length()) {
//         cout << output << " ";
//         return;
//     }

//     // exclude
//     subsequenceSTR(s, i+1, output);

//     // include
//     output.push_back(s[i]);
//     subsequenceSTR(s,i+1, output);
// }



// int targetSum(vector<int> arr,int target) {
//     // B.C
//     if(target == 0) return 0;

//     if(target < 0) return INT_MAX;

//     // Relation
//     int mini = INT_MAX;
//     for(int i=0; i<arr.size(); i++) {
//         int ans = targetSum(arr, target-arr[i]);
        
//         if(ans != INT_MAX) mini = min(mini, ans+1);
//     }

//     return mini;
// }



// int maxSegments(int len,int x,int y, int z) {
//     // B.C
//     if(len == 0) return 0;
//     if(len < 0) return INT_MIN;

//     int ans = 0;
//     int maxi = INT_MIN;
//     if(len-x >= 0) {
//         ans = maxSegments(len-x, x,y,z);
//         maxi = max(maxi, ans+1);
//     }

//     if(len-y >= 0) {
//         ans = maxSegments(len-y, x,y,z);
//         maxi = max(maxi, ans+1);
//     }

//     if(len-z >= 0) {
//          ans = maxSegments(len-z, x,y,z);
//         maxi = max(maxi, ans+1);
//     }

//     return maxi;
// }


// int sumNonAdjacent(vector<int>arr, int i) {
//     // B.C
//     if(i >= arr.size()) return 0;

//     // include
//     int ans1 = arr[i] + sumNonAdjacent(arr, i+2);
    
//     // exclude
//     int ans2 = 0 + sumNonAdjacent(arr, i+1);

//     return ans1 > ans2 ? ans1 : ans2;    
// }



// void lastOccurrence(string s,char ch,int& ans, int i) {
//     if(i<0) return;

//     if(s[i] == ch) {
//         ans = i;
//         return;
//     }
//     lastOccurrence(s,ch,ans,i-1);
// }


// void strReverse(string& s, int i,int j) {
//     if(i>=j) return;

//     swap(s[i],s[j]);
//     strReverse(s,i+1,j-1);

// }


// void addStr(string& num1, int p1, string& num2, int p2, int carry, string& ans) {
//     // B.C
//     if(p1 < 0 && p2 < 0 ) {
//         if(carry != 0) ans.push_back(carry+'0'); // can't return carry+'0' because function returns "string"

//         return;
//     }


//     // Ek case sambhal lo
//     int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
//     int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
//     int sum = n1+n2 + carry;
//     int digit = sum%10;
//     carry = sum/10;
//     ans.push_back(digit+'0');


//     // Relation
//     addStr(num1, p1-1, num2, p2-1, carry, ans);
// }



// bool isPalindrome(string s,int i,int j) {
//     if(i>=j) return true;

//     if(s[i] != s[j]) return false;
//     return isPalindrome(s,i+1,j-1);
// }


// void removeOccurence(string& s,string& part,int i) {
//     i = s.find(part);
//     if(i != string::npos)  {
//         s.erase(i,part.size());
//         removeOccurence(s,part,i);
//     }

//     // B.C or when i == string::npos
//     else return;
// }



// void printSubArrays(vector<int> arr, int i, vector<int> output) {
//     // B.C
//     if(i >= arr.size()) {
//         for(auto x: output) cout << x << " ";
//         cout << endl;
//         return;
//     }

//     // Ek case solve sambhal lo
//     // exclude
//     printSubArrays(arr, i+1,output);

//     // include
//     output.push_back(arr[i]);    
//     printSubArrays(arr, i+1, output);
// }


// void printSubArray_Util(vector<int>& arr, int start, int end) {
//     // B.C
//     if(end == arr.size()) return;


//     // Ek case sambhal lo
//     for(int i=start; i<=end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Relation
//     printSubArray_Util(arr, start, end+1);
// }


// void printContinuousSubArrays(vector<int>& arr) { 
//     for(int start=0; start<arr.size(); start++) {
//         int end = start;
//         printSubArray_Util(arr, start, end);
//     }
// }


// void maxProfitSellStock(vector<int>& prices, int lp, int& maxPr, int i) {    
//     // B.C
//     if(i>=prices.size()) return;

//     // Ek case sambhal lo
//     if(prices[i] < lp) lp = prices[i];
//     int pr = prices[i]-lp;
//     if(pr > maxPr) maxPr = pr;

//     // Relation
//     maxProfitSellStock(prices, lp, maxPr, i+1);
// }



// string integerToWords(int num) {
//     if(num == 0) return "Zero";
//     vector<pair<int, string>> mp = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9,"Nine"}, {8,"Eight"}, {7,"Seven"}, {6,"Six"}, {5,"Five"}, {4,"Four"}, {3,"Three"}, {2,"Two"}, {1,"One"}};
   
//     // for(auto it: mp) {
//     //     if(num >= it.first) {
//     //         return (num>=100 ? integerToWords(num/it.first) + " " : "") + it.second + (num%it.first == 0 ? "" : " " + integerToWords(num%it.first));
//     //     }
//     // }


//     // easy way to write above code
//     for(auto it:  mp) {
//         if(num >= it.first) {
//             string a = "";
//             if(num >= 100) {
//                 a = integerToWords(num/it.first) + " ";
//             }
//             string b = it.second;

//             string c = "";
//             if(num%it.first != 0) {
//                 c = " " + integerToWords(num%it.first);
//             }
//             return a+b+c; 
//         }
//     }
//     return "";
// }
 

// bool wildCardMatching(string s, int si, string p, int pi) {
//     // B.C
//     if(si == s.size() && pi == p.size()) return true;

//     if(si == s.size() && pi < p.size()) {
//         while(pi < p.size()) {
//             if(p[pi] != '*') return false;
//             pi++;
//         }
//         return true;
//     }

//     // Relation
//     if(s[si] == p[pi] || p[pi] == '?') return wildCardMatching(s,si+1,p,pi+1);

//     if(p[pi] == '*') {
//         // when we don't include anything in "*"
//         bool case1 = wildCardMatching(s, si, p, pi+1);

//         // When we include character of "s" string in "*"
//         bool case2 = wildCardMatching(s, si+1, p, pi);

//         return case1 || case2;
//     }

//     // char doesn't match
//     return false;
// } 


// int numSquares(int n) {
//     // B.C
//     if(n==0) return 1;

//     if(n<0) return 0;

//     int i=1;
//     int ans = INT_MAX;
//     while(i <= sqrt(n)) {
//         int perfectSquare = i*i;
//         int perfectSolution = 1 + numSquares(n-perfectSquare); 

//         if(perfectSolution < ans)  ans = perfectSolution;

//         i++;
//     }
//     return ans;
// }


// int minCostTickets(vector<int>& days, vector<int>& cost, int i) {
//     // B.C
//     if(i >= days.size()) return 0;

//     // Solve 1 case
//     // 1 day pass
//     int cost1 = cost[0] + minCostTickets(days, cost, i+1);

//     // 7 day pass
//     int passEndDay = days[i] + 7 - 1;
//     int j = i;
//     while(j<days.size() && days[j] <= passEndDay) {
//         j++;
//     }

//     int cost7 = cost[1] + minCostTickets(days, cost, j);

//     // 30 days pass
//     passEndDay = days[i] + 30 - 1;
//     j = i;
//     while(j<days.size() && days[j] <= passEndDay) {
//         j++;
//     }
    
//     int cost30 =  cost[2] + minCostTickets(days, cost, j);

//     return min(cost1, min(cost7,cost30));
// }



int diceRolls(int n, int k, int target) {
    // B.C
    if(target < 0) return 0;
    if(n==0 &&  target == 0) return 1;
    if(n != 0 && target == 0) return 0;
    if(n == 0 && target != 0) return 0;

    // RE
    int ans = 0;
    for(int i=1; i<=k; i++) {
        ans += diceRolls(n-1, k, target-i);
    }

    return ans;
}


int main() {
    /////////////////////
    // Recursion

    // // factorial
    // int n=5;
    // cout << factorial(n);


    // // print upto n
    // int n = 5;
    // print(n);

    // // print number upto n in reverse order
    // int n = 5;
    // printReverse(n);

    // // find 2^n
    // int n = 6;
    // cout << power2(n);


    // // Fibonacci
    // int n = 7;
    // cout << fibonacci(n);


    // // climbing stairs(leetcode)
    // int n = 3;
    // cout << climbStairs(n);


    // // Min. in an array
    // vector<int> arr = {3,8,5,2};
    // int i=0;
    // cout << minArray(arr,i);




    // // Max in an array
    // vector<int> arr = {3,8,5,2};
    // int i = 0;
    // cout << maxArray(arr,i);


    // // Max. in an array 2
    // vector<int> arr = {3,8,5,1,2,41};
    // int i=0;
    // int maxi = INT_MIN;
    // maxArray2(arr,i,maxi);

    // cout << maxi;


    // // find Key
    // vector<int> arr = {3,5,1,9,31};
    // int k = 1;
    // int i = 0;
    // cout << findKey(arr, k, i);


    // // print digitts of a number
    // int n = 64791;
    // vector<int> arr;
    // digits(n, arr);

    // for(int i=0; i<arr.size(); i++) cout << arr[i];


    // // check array is sorted or not
    // // vector<int> arr = {3,1,6,8,9};
    // vector<int> arr = {3,5,7,11,64};
    // int i =0;
    // cout << isSorted(arr, i);


    // // Binary search using recursion
    // vector<int> arr = {3,5,7,11,64};
    // int k = 64;
    // int s = 0;
    // int e = arr.size()-1;
    // cout << binarySearch(arr, k, s, e);


    // // Print Subsequence of a string
    // string s= "abc";
    // int i=0;
    // string output = "";
    // subsequenceSTR(s, i, output);
 

    // // minimum no. of elements to reach target sum (coin change leetcode)
    // vector<int> arr = {1,2,3,4,5};
    // int target = 9;
    // cout << targetSum(arr,target);



    // // Max. segment of a rod
    // int len = 11;
    // int x = 3;
    // int y = 2;
    // int z = 2;
    // cout << maxSegments(len,x,y,z);



    // // Max. Sum of non-adjacent elements (House robber 1, leetcode) -: with recursion it will give TLE
    // vector<int> arr = {1,2,3,1,3,5,8,1,9};
    //  int i=0;
    //  cout << sumNonAdjacent(arr, i);


    // // Last Occurrence of a string-: T.C => O(n+1) = O(n), S.c => O(n+1) = O(n) {because function is being called n+1 times and everytime a function is called it occupies some space in call stack}
    // string s = "abcddedg";
    // char ch = 'd';
    // int ans=-1;

    // lastOccurrence(s,ch,ans,s.length()-1);
    // cout << ans;


    // // Reverse a String-: T.C => O(n/2) = O(n), S.C => O(n/2) = O(n)
    // string s = "parth";

    // strReverse(s,0,s.length()-1);
    // cout << s;


    // // Add strings-: T.C => O(n), n=max(nun1.size(),nun2.size()), S.c => O(n)
    // string num1 = "123";
    // string num2 = "11";
    // string ans = "";

    // addStr(num1, num1.length()-1, num2, num2.length()-1,0,ans);
    // reverse(ans.begin(), ans.end());
    // cout << ans;


    // // palindrome check-: T.C => O(n/2) = O(n), S.C => O(n)
    // // string s = "racecar";
    // string s = "parth";

    // cout << isPalindrome(s,0,s.length()-1);



    // // Remove all occurences of a string-: T.C => O(nm) because find() complexity = O(n) and if we remove "part" "m" times then total = (n*m), S.C => O(m), m = no. of times present in "s"
    // string s = "daabcbaabcbc";
    // string part = "abc";

    // removeOccurence(s,part,0);

    // cout << s;


    // // Print all sub-arrays
    // vector<int> arr = {1,2,3,4,5};
    // vector<int> output;
    // printSubArrays(arr, 0, output);


//     // Print continuous sub-arrays-: T.C => O(n^2) , S.C => O(n+2) = O(n)
//     vector<int> arr = {1,2,3,4,5};

//    printContinuousSubArrays(arr);



// // Buy and sell stocks-: T.C, S.C => O(n+1) = O(n+1)
// vector<int> prices = {7,1,5,3,6,4};
// int maxPr = INT_MIN;

// maxProfitSellStock(prices, prices[0], maxPr,0);

// cout << maxPr;



// // Integer to English words(leetcode)
// int num = 123456;

// cout << integerToWords(num);



// // Wild card matching(leetcode)
// string s = "aa";
// string p = "a";

// cout << wildCardMatching(s,0,p,0);


// // Perfect Squares(leetcode)
// int n = 13;


// cout << numSquares(n)-1;



// // Minimum cost for tickets -: T.C => O(3^n), S.C => O(n) 
// vector<int> days = {1,2,3,4,5,6,7,8,9,10,30,31};
// vector<int> cost = {2,7,15};

// cout << minCostTickets(days, cost, 0);


// No. of dice rolls with target sum
int n = 2;
int k = 6;
int target = 7;

cout << diceRolls(n,k,target);
    return 0;
}