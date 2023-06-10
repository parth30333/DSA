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


int minCostTickets(vector<int>& days, vector<int>& cost, int i) {
    if(i >= days.size()) return 0;

    // 1 day pass
    int cost1 = cost[0] + minCostTickets(days, cost, i+1);

    // 7 day pass
    int passEndDay = days[i]+7-1;
    int j = i;
    while(j < days.size() && days[j] <= passEndDay) j++;

    int cost2 = cost[1] + minCostTickets(days, cost, j);

    // 30 day pass
    passEndDay = days[i] + 30 - 1;
    j = i;
    while(j < days.size() && days[j] <= passEndDay) j++;

    int cost3 = cost[2] + minCostTickets(days, cost, j);

    return min(cost1, min(cost2, cost3));
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


// min cost tickets
vector<int> days = {1,4,6,7,8,20};
vector<int> cost = {2,7,15};

cout << minCostTickets(days, cost, 0);


return 0;   
}
