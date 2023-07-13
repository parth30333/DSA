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


// functions
// int almostSorted(vector<int> arr, int key) {
//     int s = 0;
//     int e = arr.size()-1;

//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(arr[mid] == key) return mid;

//         if(arr[s] <= arr[mid] && key >= arr[mid]) {
//             if(arr[mid-1] == key) return mid-1;
//             else if(arr[mid+1] == key) return mid+1;
//             else s = mid+1;
//         }
//         else {
//             if(arr[mid] >= arr[s] && key <= arr[mid]) {
//                 if(arr[mid-1] == key) return mid-1;
//                 else if(arr[mid+1] == key) return mid+1;
//             }
//             else e = mid-1;
//         }
//     }
//     return -1;
// }


// int binarySearch(vector<int>& arr, int k) {
//     int s = 0;
//     int e = arr.size()-1;
//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(arr[mid] == k) return mid;

//         else if(arr[mid] > k) e = mid-1;

//         else s = mid+1;
//     }
//     return -1;
// }

// string isKsorted(vector<int>& arr, int k) {
//     vector<int> temp(arr.size());

//     for(int i=0; i<arr.size(); i++) temp[i] = arr[i];

//     sort(temp.begin(), temp.end());
//     int count = -1;
//     string ans = "No";

//     for(int i=0; i<arr.size(); i++) {
//         count = binarySearch(temp, arr[i]);
//         if(abs(i-count) > k) return ans;
//     }    
//     return "Yes";
// }



int divide(int n, int a) {
    if(n == a) return 1;
    bool  isPositive = (n<0 == a<0);
    unsigned int div = n;
    unsigned int dvs = a;

    unsigned int result = 0;
    while(div >= dvs) {
        long long temp = dvs; int count = 0;
        while(div >= temp << 1 << count) {
            count++;
        } 

        result += 1 << count;
        div -= dvs << count;
    }
    if(result == 1 << 31 && isPositive) return INT_MAX;
    return isPositive ? result : -result;
}


int main() {

// // almost sorted array
// vector<int> arr = {10,3,40,20,50,80,70};
// cout << almostSorted(arr, 80);


// // check if array is k Sorted array
// vector<int> arr = {3,2,1,5,6,4};
// cout << isKsorted(arr, 2);


// divide 2 integers
cout << divide(10,2);

    return 0;
}