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
#include<set>

using namespace std;

// Functions
// void merge(vector<int>& arr, int s, int e, int mid) {
//     int len1 = mid-s+1;
//     int len2 = e-mid;

//     int* left = new int[len1];
//     int* right = new int[len2];

//     int k = s;
//     for(int i=0; i<len1; i++) left[i] = arr[k++];

//     k = mid+1;
//     for(int i=0; i<len1; i++) right[i] = arr[k++];


//     int leftInd = 0;
//     int rightInd = 0;
//     int mainInd = s;

//     while(leftInd < len1 && rightInd < len2) {
//         if(left[leftInd] < right[rightInd]) arr[mainInd++] = left[leftInd++];

//         else arr[mainInd++] = right[rightInd++];
//     }

//     while(leftInd < len1) arr[mainInd++] = left[leftInd++];

//     while(rightInd < len2) arr[mainInd++] = right[rightInd++];
// }

// void mergeSort(vector<int>& arr, int s, int e) {
//     if(s>=e) return;

//     int mid = s+(e-s)/2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid+1, e);

//     merge(arr, s, e, mid);
// }

// int pivot(vector<int>& arr, int s, int e) {
//     int pivInd = s;
//     int pivEL = arr[s];

//     int count = 0;
//     for(int i=s+1; i<=e; i++) if(arr[i] <= pivEL) count++;

//     swap(arr[pivInd], arr[s+count]);

//     pivInd = s+count;
//     int i = s;
//     int j = e;

//     while(i<j) {
//         while(arr[i] <= pivEL) i++;

//         while(arr[j] > pivEL) j--;

//         if(i<j) swap(arr[i], arr[j]);
//     }
//     return pivInd;
// }


// void quickSort(vector<int>& arr, int s, int e) {
//     if(s>=e) return;

//     int piv = pivot(arr, s, e);

//     quickSort(arr, s, piv-1);
//     quickSort(arr, piv+1, e);
// }

// void permutationOfStr(string& s, int i) {
//     if(i >= s.size()) {
//         cout << s << " ";
//         return;
//     }

//     for(int j=i; j<s.size(); j++) {
//         swap(s[i], s[j]);

//         permutationOfStr(s, i+1);

//         swap(s[i], s[j]);
//     }
// }


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


// // Permutation of a string
// string s = "abc";

// permutationOfStr(s, 0);




return 0;
}