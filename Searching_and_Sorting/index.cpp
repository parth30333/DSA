#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
#include<typeinfo>
#include<numeric>
#include<string>
#include<set>
using namespace std;


// Functions-:
int binarySearch(vector<int>arr, int target, int s, int e) {
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    // int ans = arr.size();

    while(start<=end) {
        if(arr[mid] == target) return mid;
        
        else if(arr[mid] > target) end = mid-1;

        else start = mid+1;
    }
    return -1;
}

int firstOccurrence(vector<int>arr, int target) {
    int s = 0;
    int e = arr.size()-1;
    int index = arr.size()-1;

    while(s<=e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == target) {
            index = mid;
            e = mid  -1;
        }
        else if(arr[mid] > target) e = mid-1;

        else s = mid+1;
}
    return index;
}


// int pivotArray(vector<int>arr) {
//     // int leftSum = 0;
//     // int rightSum = accumulate(arr.begin(), arr.end(),0);

//     // for(int i=0; i<arr.size(); i++) {
//     //     rightSum -= arr[i];
//     //     if(leftSum == rightSum) return i;

//     //     leftSum += arr[i];
//     // }
//     // return -1; 

//     // alternate
//     int s=0;
//     int e = arr.size()-1;

//     while(s<e) {
//         if(arr[0] < arr[arr.size()-1]) return 0;
//         int mid = s + (e-s)/2;
    
//         if(arr[mid] >= arr[s]) s = mid+1;

//         else e = mid;
//     }
//     return s;
// }


// int pivotSortedRotated(vector<int>arr) {
//     int s = 0;
//     int e = arr.size()-1;
//     int mid = -1;

//     if(arr[0] <= arr[arr.size()-1]) return arr[0];
    
//     while(s<e) {
//         mid = s + (e-s)/2;

//         if(mid > 0 && arr[mid] < arr[mid-1]) return arr[mid]; 

//         else if(arr[mid] < arr[mid+1] && arr[mid] > arr[s]) s = mid+1; // if we are in first sorted array

//         else if(arr[mid] < arr[mid+1] && arr[mid] < arr[e]) e = mid; // if we are in second sorted array

//         else return arr[mid+1];  // if we are exactly one spot behind pivot or last of 1st sorted array
//     }

//     return -1;
// }


// int pivotArrayIndex(vector<int> arr) {
//         int s = 0;
//     int e = arr.size()-1;
//     int mid = -1;

//     if(arr[0] <= arr[arr.size()-1]) return 0;
    
//     while(s<e) {
//         mid = s + (e-s)/2;

//         if(mid > 0 && arr[mid] < arr[mid-1]) return mid; 

//         else if(arr[mid] < arr[mid+1] && arr[mid] > arr[s]) s = mid+1; // if we are in first sorted array

//         else if(arr[mid] < arr[mid+1] && arr[mid] < arr[e]) e = mid; // if we are in second sorted array

//         else return mid+1;  // if we are exactly one spot behind pivot or last of 1st sorted array
//     }

//     return -1;
// }









// int almostSorted(vector<int>arr, int key) {
//     int s=0;
//     int e = arr.size()-1;

//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(arr[mid] == key) return mid;

//         if(arr[mid] >= arr[s] && key >= arr[mid]) {
//             if(arr[mid-1] == key)  return mid-1;
//             else if(arr[mid+1] == key) return mid+1;
//             else s = mid+1;
//         }

//         else {
//             if(key <= arr[mid] && key >= arr[s]) {
//                 if(key == arr[mid-1]) return mid-1;
//                 else if(key == arr[mid+1]) return mid+1;
//             }
//             else e = mid-1;
//         }
//     }
//     return -1;
// }


// string KSorted(vector<int>arr, int k) {
//     vector<int>temp(arr.size());

//     for(int i=0; i<arr.size(); i++) {
//         temp[i] = arr[i];
//     }

//     sort(temp.begin(), temp.end());

//     int count = -1;
//     char j[3] = "No";
//     for(int i=0; i<arr.size(); i++) {
//         int target = arr[i];
//         count = binarySearch(temp,target);
//         if(abs(i-count) > k) return j;
//     }
//     return "Yes";
    
// }


// int divideTwoNumbers(int n, int a) {
//     // this solution doesn't work on leetcode
//     // int s = 0;
//     // int e = abs(n);
//     // int sign;
//     // if((a<0 && n>0) || (a>0 && n<0)) sign = -1;
//     // else sign = 1;
    
//     // n = abs(n);
//     // a = abs(a);

//     // int ans = -1;
//     // if(n==a) return sign*n;

//     // while(s<=e) {
//     //     int mid = s + (e-s)/2;
//     //     int sum = 0;
//     //     for(int i=0; i<a; i++) sum += mid;

//     //     if(sum == n) return sign*mid;
//     //     else if(sum < n) {
//     //         s = mid+1;
//     //         ans = mid;
//     //     }
//     //     else e = mid-1;
//     // }
//     // return sign*ans;


    // if(n==a) return 1;

    // bool isPositive = (n<0 == a<0);
    // unsigned int div= abs(n);
    // unsigned int dvs = abs(a);

    // unsigned int result = 0;

    // while(div >= dvs) {
    //     long long temp = dvs, count = 0;
    //     while(div >= temp << 1 << count) {
    //         count++;
    //     }

    //     result += 1<<count;
    //     div -= dvs << count;
    // }

    // if(result == 1<<31 && isPositive) return INT_MAX;
    // return isPositive ? result : -result;
    // }



// int oddOccuringElement(vector<int>arr) {
//     int s = 0;
//     int e = arr.size()-1;
//     int mid = s + (e-s)/2;
//     while(s<=e) {
//         if(s==e) return s;

//         if(mid%2 == 0) {
//             if(arr[mid] == arr[mid+1]) s = mid+2;
//             else e = mid;
//         }
//         else {
//             if(arr[mid] == arr[mid+1]) e = mid-1; // answer cannot exist at odd position, so we have to check which side we are on, as we are checking mid(odd) == mid+1 means we are on right and we can e = mid-1 since answer is not on odd index
//             // first condition is to check if element is on right side, if not we are on left side and s = mid+1
//             else s = mid+1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }
 

// int kDifferencePair(vector<int>arr, int k) {
//     // sort(arr.begin(), arr.end());
//     // int i=0, j=1;
//     // set<pair<int,int>> ans;
//     // while(i<j) {
//     //     int diff = arr[j]-arr[i];
//     //     if(diff == k) {
//     //         ans.insert({arr[i], arr[j]});
//     //         j++,i++;
//     //     }
//     //     else if(diff > k) i++;
//     //     else j++;
//     // }
//     // return ans.size(); 

   
//     // using binary search
//     sort(arr.begin(), arr.end());
//     int i=0, j=1;
//     set<pair<int,int>> ans;
//     for(int i=0; i<arr.size(); i++) {
//         int x = binarySearch(arr,arr[i]+k, i+1);
//         if(x>=0) ans.insert({arr[i], arr[x]});
//     }
//     return ans.size();
// } 



// vector<int> kClosestElements(vector<int>arr, int k, int x) {    
//     // // (a)-: using two pointer solution
//     // int l=0;
//     // int h = arr.size()-1;

//     // while(h-l >= k) {
//     //     if(x-arr[l] > arr[h]-x) l++;
//     //     else h--;
//     // }
//     // return vector<int>(arr.begin()+l, arr.begin()+l+k);


//     // (b)-: using binary search
//     int hi = firstOccurrence(arr, x);
//     int lo = hi-1;

//     while(k--) {
//         if(lo<0) hi++; // if hi = 0(means lo = -1) then all the integers will be found on right so just keep increasing "hi" 
//         else if(hi >= arr.size()) lo--; // if hi = 4 ([1,2,3,4,5], x = 7), then lo = 3 now we now all the closest elements will be found on left as "hi" is on far right, so ke decreasing "lo"
//         else if(x-arr[lo] > arr[hi]-x) hi++;
//         else lo--;
//     }

//     return vector<int>(arr.begin()+lo+1, arr.begin()+hi);
// }


// int searchInfiniteArray(vector<int>arr, int target) {
//     int i=0;
//     int j = 1;
//     if(arr[i] == target) return 0;

//     while(arr[j] <= target) {
//         i=j;
//         j *= 2;
//     }

//     int ans = binarySearch(arr, target, i, j);
//     return ans;
// }



// bool isPossibleSolution(int arr[],int n,int m, int mid) {
//     int c = 1;
//     int pages = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i] > mid) return false;
        
//         if(pages + arr[i] > mid){ 
//             c++;
//             if(c <= m) pages = arr[i];
//             else return false;
//         }
//         else pages += arr[i];
//     }
//     return true;
// }



// int bookAllocation(int arr[], int n, int m) {
//     if(m==1) return accumulate(arr, arr+n,0);
//     else if(m==n) return *max_element(arr, arr+n);
//     else if(m>n) return -1;
//     int ans = -1;

//     int s = 0;
//     int e = accumulate(arr, arr+n,0);

//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(isPossibleSolution(arr, n, m, mid))  {
//             ans = mid;
//             e = mid-1;
//         }
//         else s = mid+1;
//     }
//     return ans;
// }



// bool isPossibleCowAllocation(vector<int>arr, int k, int mid) {
//     int pos = arr[0];
//     int c = 1;
//     for(int i=1; i<arr.size(); i++) {
//         if(arr[i]-pos >= mid) {
//             c++;
//             pos = arr[i];
//         }
//         if(c == k) return true; 
//     }
//     return false;
// }


// int aggresiveCows(vector<int>arr,int n,int k) {
//     sort(arr.begin(), arr.end());
//     int s = 0;
//     int e = arr[n-1]-arr[0];
//     int ans = -1;

//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(isPossibleCowAllocation(arr, k, mid))  {
//             ans = mid;
//             s = mid+1;
//         }
//         else e = mid-1;
//     }
//     return ans;
// }


// bool isEKOSPOJ(vector<long long int>arr, long long int h, long long int mid) {
//     long long int woodCollected = 0;
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[i] > mid) woodCollected += arr[i]-mid;
        
//     }
//     return woodCollected>=h;
// }


// long long int EKOSPOJ(vector<long long int> arr, long long int h) {
//     long long int s = 0, e, ans = -1;
//     e = *max_element(arr.begin(), arr.end()); 

//     while(s<=e) {
//         long long int mid = s + (e-s)/2;
//         if(isEKOSPOJ(arr, h, mid)) {
//             ans = mid;
//             s = mid+1;
//         }
//         else e = mid-1;
//     } 
//     return ans;
// }


// bool isPRATASPOJ(vector<int> cooks, int nP, int mid) {
//     int PrataCount = 0;
//     for(int i=0; i<cooks.size(); i++) {
//         int R = cooks[i],  j = 1;
//         int timeTaken =  0;


//         while(true) {
//             if(timeTaken + R*j <= mid) {
//                 PrataCount++;
//                 timeTaken += R*j;
//                 j++;
//             }
//             else break;
//         }
//         if(PrataCount >= nP) return true;
//     }
//     return false;
// }

// int PRATASPOJ(vector<int>cooks, int nP) {
//     int s = 0;
//     int highest = *max_element(cooks.begin(), cooks.end());
//     int e = highest * (nP * (nP+1)/2);
//     int ans = -1;

//     while(s<=e) {
//         int mid = s + (e-s)/2;
//         if(isPRATASPOJ(cooks, nP, mid)) {
//             ans = mid;
//             e = mid-1;
//         }
//         else s = mid+1;
//     }
//     return ans;
// }

int main() {

// // binary search    
// vector<int>arr{1,5,9,21,42,46,78,91};

// if(binarySearch(arr, 78)) 
//     cout << "Found at index-: "  << binarySearch(arr,78); 
// else cout << "not found";

// if(binary_search(arr.begin(), arr.end(), 78)) 
//     cout << "Found at index-: "  << binarySearch(arr,78); 

// // first occurrence of an element in a sorted array
// vector<int>arr{1,3,4,4,4,4,6,86,90,102,116,234,634};
// int target = 4;
// cout << firstOccurrence(arr, target);


// // last occurrence of an in a sorted array
// vector<int>arr{1,3,4,4,4,4,6,86,90,102,116,234,634};
// int target = 4;
// int s = 0;
// int e = arr.size()-1;
// int mid = s + (e-s)/2;
// int index = -1;

// while(s<=e) {
//     if(arr[mid] == target) {
//         index = mid;
//         s = mid+1;
//     }

//     else if(arr[mid] > target) e = mid-1;

//     else s = mid+1;

//     mid = s + (e-s)/2;

// }

// cout << index;


// // total no. of occurrence of an element in a sorted array
// vector<int>arr{1,3,4,4,4,4,4,6,86,90,102,116,234,634};
// int target = 4;

// auto first = lower_bound(arr.begin(), arr.end(), target); 
// auto last = upper_bound(arr.begin(), arr.end(), target);

// cout << last - first;


// // find missing element using binary search
// // vector<int>arr{1,2,3,4,6,7,8};
// vector<int>arr{1,3,4,5};
// int s = 0;
// int e = arr.size()-1;

// while(s<=e) {
//     int mid = s + (e-s)/2;
    
//     if(arr[mid] != mid+1 && arr[mid-1] == mid) {
//         cout << mid+1;
//         return 0;
//     }
//     else if(arr[mid] != mid+1) e = mid-1;

//     else s = mid+1;
// }


// // peak element in a mountain array
// vector<int>arr{0,10,12,17,5,3,2,1,0};
// // vector<int>arr{0,10,5,2};
// // vector<int>arr{0,2,1,0};
// int s = 0;
// int n = arr.size(); 
// int e = n-1;

// while(s<=e) {
//     int mid = s + (e-s)/2;

//     if(mid-1 < 0 || mid+1 > n-1) return -1;
//     if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
//         cout << mid;
//         return 0;
//     }
//     else if(arr[mid] < arr[mid-1]) e = mid;
//     else s = mid+1;
// }


// // peak element alternate
// vector<int>arr{0,2,1,0};
// int s = 0;
// int n = arr.size(); 
// int e = n-1;

// while(s<e) {
//     int mid = s + (e-s)/2;
//     if(arr[mid] < arr[mid+1]) s = mid+1;

//     else e = mid; 
//     // we have not done e = mid-1 because we might miss the peak when we re-evaluate mid(in case e = mid+1 and mid is the peak) as we are returning either "s" or "e"
// }

// cout << s; // or cout << e;


// // find pivot of a array using binary search (different than sorted rotated array)
// // vector<int>arr{1,7,3,6,5,6};
// vector<int>arr{-1,-1,-1,-1,-1,-1};
// cout << pivotArray(arr);



// // find pivot of a sorted rotated array using binary search
// // vector<int>arr{4, 5, 6, 7, 8, 1, 2, 3};
// // vector<int>arr{3,4,5,1,2};
// // vector<int>arr{3,1};
// vector<int>arr{11,13,15,17};
// cout << pivotSortedRotated(arr);



// // search in a sorted rotated array (leetcode)
// vector<int>arr{3,4,5,1,2};
// int target = 1;
// int piv = pivotArrayIndex(arr);
// int s = 0;
// int e = arr.size()-1;

// if(target >= arr[piv] && target <= arr[arr.size()-1]) {
//      s = piv;
//      e = arr.size()-1;
// } else {
//      e = piv-1;
//      s = 0;
// } 
// // cout << s << e;
// // // cout << e << s<< endl;

// int ans = s;
// while(s<e) {
//     int mid = s + (e-s)/2;
//     if(arr[mid] == target) {
//         ans = mid;
//         break;
//     }
//     else if(arr[mid] > target)  {
//         e = mid;
//         ans = e;
//     }
//     else {
//         s = mid+1;
//         ans = e;
//     }
// }

// if(arr[ans] == target) cout << ans;
// else cout << -1;



// // search in a sorted rotated array alternate
// vector<int>arr{3,4,5,1,2};
// int target = 1;
// int s = 0;
// int e = arr.size()-1;
// int mid = s + (e-s)/2;

// while(s<=e) {
//     if(arr[mid] == target) {
//         cout << mid;
//         break;
//     } 

//     if(arr[mid] >=  arr[s]) {
//         if(target >= arr[s] && target <= arr[mid]) e = mid-1;
//         else s = mid+1;
//     }
//     else {
//     if(target >= arr[mid] && target <= arr[e]) s = mid+1;
//     else e = mid-1;
//     }
//     mid = s + (e-s)/2;
// }


// // if(arr[mid] == target) cout << mid;
// else cout << -1;



// square root of a nnumber
// int n = 16;
// int i = 1;

// while(i*i <= n) {
//     i++;
//  }
// cout  << i-1;


// // square root using binary search
// int n =5;
// int s = 1;
// int e = n/2;
// int mid = s + (e-s)/2;

// while(s<e) {
//     if(mid > n/mid) {
//         cout << "overflow(n is out of integer range)";
//         break;
//     }

//     if(mid*mid < n) s = mid+1;    
//     else e = mid;

//     mid = s + (e-s)/2;
// }

// // if(s*s > n) cout << s-1;
// if(s> n/s) cout << s-1; //  to avoid out of range
// else cout << s;



// // search in an almost sorted array-: https://www.geeksforgeeks.org/search-almost-sorted-array/
// // vector<int>arr{10,3,40,20,50,80,70};
// // vector<int>arr{15,20,30,25,35};
// vector<int>arr{2,1,3,5,4,7,6,8,9};
// int key = 10;

// int ans = almostSorted(arr, key);
// cout << ans;



// // check wether a array is K sorted array-: https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1
// // vector<int>arr{3,2,1,5,6,4};
// vector<int>arr{3,21,41,5,38,7,37,2,13,40,17,34};
// int k = 3;

// // NOTE-: if you use vector instead of an array in GFG then on submission it will show time limit exceeded problem
// cout << KSorted(arr, k);



// // Divide two integers without using multiplication, division and mod operator
// int n = -1;
// int a = 1;
// cout << divideTwoNumbers(n,a) << endl;


// NOTE-: must check this explanation if you can't understand the 2nd solution-: https://www.youtube.com/watch?v=m4L_5qG4vG8&t=476s
//        in divideTwoNumbers() function         


// // alternate of divide 2 numbers
// long long int n = 95;
// long long int a = -41;
// int sign = (a<0 || n<0) ? -1 : 1;

// n = abs(n);
// a = abs(a);

// if(abs(a) == 1) cout << (sign == 1) ? n : -n;

// long long int ans = exp(log(n) - log(a)) + 0.0000000001;
// // a/b = e^log(a) / e^log(b); default base = e;
// // and 0.0000000001 is added to compensate for precision errors

// sign == 1 ? cout << ans : cout << -ans; 


// // single number(leetcode)
// vector<int>arr{4,1,2,1,2};
// int ans = arr[0];
// for(int i=1; i<arr.size(); i++) {
//     ans ^= arr[i];
// }

// cout << ans;


// // find odd occuring element in an array
// vector<int>arr{1,1,2,2,1,1,2,2,13,1,1,40,40,13,13};
// cout << oddOccuringElement(arr);



// // find pair with a difference of k arr[i]-arr[j] = k
// // vector<int>arr{3,1,4,1,5};
// // vector<int>arr{1,2,3,4,5};
// vector<int>arr{1,3,1,5,4};
// // vector<int>arr{1,1,1,1,1};
// int k = 0;
// cout << kDifferencePair(arr,k);
    
   

// // find k closest element in an array
// vector<int>arr{1,2,3,4,5};
// // vector<int>arr{1,1,1,10,1,10};
// int k = 5;
// int x = 1;

// auto ans = kClosestElements(arr,k,x);

// for(auto x: ans) cout << x << " ";




// // search in an infinite array
// vector<int>arr{3,4,5,6,11,13,14,15,16,41,51,67,81};
// int target = 14;
// cout << searchInfiniteArray(arr, target);



// // Allocate minimum number of pages
// // int arr[] = {15,10,19,10,5,8,7};
// int arr[] = {12,34,67,90};

// int n = 4;
// int m = 2;

// cout << bookAllocation(arr, n,m);




// // Painter partition problem
// // int arr[] = {5,10,30,20,15};
// int arr[] = {10,20,30,40};
// int n = 4;
// int k = 2;

// // NOTE-:  same as book allocation problem just use long long as datatype instead of int and calculate "end" using a for loop instead of using accumulate function because in our array is of int type so accumulate() wil hold our sum in int datat_type and sum could be bigger then "int" size

// int ans = bookAllocation(arr, n, k);
// cout << ans;


// // Aggresive cows
// vector<int>arr{1,2,4,8,9};
// int n = 5;
// int k = 3;

// cout << aggresiveCows(arr,n,k);



// // EKO Spoj
// // vector<int>arr{20,15,10,17};
// vector<long long int>arr{4,42,40,26,46};
// long long int h = 20;

// cout << EKOSPOJ(arr, h);


// // PRATA SPOJ
// vector<int>cooks{1,1,1,1,1,1,1,1};
// int nP = 8;

// cout << PRATASPOJ(cooks, nP);


// // Selection Sort-: Time complexity-: O(n^2)
// vector<int>arr{2,5,7,1,6,3,10};

// for(int i=0; i<arr.size()-1; i++) {
//     int minIndex = i;
//     for(int j=i+1; j<arr.size(); j++) {
//         if(arr[j] < arr[minIndex]) minIndex = j;
//     }

//     swap(arr[i], arr[minIndex]);
// }
// for(auto x: arr) cout << x << " ";



// // Bubble Sort-: Time complexity-: O(n^2), best case T.C = O(n) when array is already sorted
// vector<int>arr{2,5,7,1,6,10,3};
// for(int i=1; i<arr.size(); i++) {
//     bool swapped = false;
//     for(int j=0; j<arr.size()-i; j++) {
//         if(arr[j] > arr[j+1]) {
//             swap(arr[j], arr[j+1]);
//             swapped = true;
//         }
//     }
//     if(swapped == false) break;
// }
// for(auto x: arr) cout << x << " ";



// // Insertion Sort-: T.C-: 
// vector<int>arr{2,5,7,1,6,10,3};
// for(int i=1; i<arr.size(); i++) {
//     int temp = arr[i]; // store
//     int j = i-1;
//     for(; j>=0; j--) {
//         if(arr[j] > temp) {
//             arr[j+1] = arr[j]; // shift
//         }
//         else break;
//     }
//     arr[j+1] = temp; // copy
// }



return 0;
}