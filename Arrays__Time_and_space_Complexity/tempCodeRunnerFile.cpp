#include <iostream>
#include <cmath>
#include <climits>
#include<vector>
#include <typeinfo>
#include <algorithm> // to use reverse and sort
#include<unordered_map>
using namespace std;
// void printDouble(int arr[]) {
//     for(int i=0; i<5; i++) {
//         cout << arr[i]*2 << " ";
//     }
// }


// bool linearSearch(int arr[], int size, int key) {
//     for(int i=0; i<size; i++) {
//         if(arr[i] == key) return true;
//     }
//     return false;
// }


// void count01(int brr[], int size) {
//     int number0 = 0;
//     int number1 = 0;

//     for(int i=0; i<size; i++) {
//         if(brr[i] ==0) number0++;
//         else if(brr[i] == 1) number1++;
//     }
//     cout << "Number of 0's-: " << number0 << endl;
//     cout << "Number of 1's-:" << number1;
// }

// void findMax(int arr[], int size) {
//     int max = INT_MIN;
//     for(int i=0; i<size; i++) {
//         if(arr[i] > max) max = arr[i];
//     }
//     cout << "Max is-: " << max;
// }


// void findMin(int arr[], int size) {
//     int min = INT_MAX;
//     for(int i=0; i<size; i++) {
//         if(arr[i] < min) min = arr[i];
//     }
//     cout << "Min is-: " << min;
// }

// void printExtreme(int arr[], int size) {
//     int start = 0;
//     int end = size-1;

//     while(start <= end) {
//         if(start == end) cout << arr[start] << endl;

//         else {
//             cout << arr[start] << " ";       
//             cout << arr[end] << " ";       
//         }
//         start++;
//         end--;
//     }
// }

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size-1;

//     while(start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

//     for(int i=0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
// }


// int findUnique(vector<int>arr) {
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++) {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }


// // Print row wise sum 
// void rowWiseSum(int arr[][3], int row, int col) {
//     for(int i=0; i<row; i++) {
//         int sum = 0;
//         for(int j=0; j<col; j++) {
//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// // column wise sum
// void colWiseSum(int arr[][3], int row, int col) {
//     for(int i=0; i<col; i++) {
//         int sum = 0;
//         for(int j=0; j<row; j++) {
//             sum += arr[j][i];
//         }
//         cout << sum << endl;
// }
    
// }


// bool linearSearch(int arr[][3], int row, int col, int key) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             if(arr[i][j] == key) return true;
//         }
// }
//     return false;
// }


// void findMax(int arr[][3],int row, int col) {
//     int max = INT_MIN;
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             if(arr[i][j] > max) max = arr[i][j];
//         }
// }
//     cout << "Max is-: " << max;
// }
 

// void transposeArray(int arr[][3], int row, int col, int transposeArr[][3]) {
//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             transposeArr[j][i] = arr[i][j];
//         }
// }

//     for(int i=0; i<row; i++) {
//         for(int j=0; j<col; j++) {
//             cout << transposeArr[i][j] << " ";
//         }
//         cout << endl;
//     }   
// } 


// int findDuplicate(vector<int>arr) {
//     // // 1-: using hashing method
//     // vector<bool>temp(arr.size(), false);

//     // for(int i=0; i<arr.size(); i++) {
//     //     if(temp[arr[i]]) return arr[i];
//     //     temp[arr[i]]   = true; // we are doing temp[arr[i]] = true because we know the numbers can't excede the range 1-arr.size()
//     // }

//     // // 2-: using rabbit and tortoise method
//     // int slow = arr[0];
//     // int fast = arr[0];

//     // do {
//     //     slow = arr[slow];
//     //     fast = arr[arr[fast]];
//     // } while(slow != fast);

//     // fast = arr[0];

//     // while(slow != fast) {
//     //     slow = arr[slow];
//     //     fast = arr[fast];
//     // }

//     // return slow;

//     // // 3-: sorting method
//     // sort(arr.begin(), arr.end());

//     // for(int i=0; i<arr.size()-1; i++) {
//     //     if(arr[i] == arr[i+1]) return i+1;
//     // }


//     // // 4-: marking visited the numbers that have already occurred
//     // // we are not swapping elements with their index, we are marking the element -ve that is present at that index and this method works only because range(1,n) 
//     // for(int i=0; i<arr.size(); i++) {
//     //     int index = abs(arr[i]);

//     //     // already visited ?
//     //     if(arr[index] < 0) return index;

//     //     // visited mark
//     //     arr[index] *= -1; 
//     // }


//     // 5-: swap element to their respective index and since range is (1,n) element at index=0 will always be extra
//     while(arr[0] != arr[arr[0]]) {
//         swap(arr[arr[0]], arr[0]);
//     }

//     return arr[0];
// }



// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans(nums.size());
//     for(int i=0; i<nums.size(); i++) ans[i] = nums[i];

//     sort(ans.begin(), ans.end());
//     int s = 0;
//     int e = ans.size()-1;

//     while(s<e) {
//         if(ans[s]+ans[e] == target) {
//             break;
//         }
//         else if(ans[s]+ans[e] < target) s++;
//         else e--;
//     }

//     vector<int> v;
//     for(int i=0; i<nums.size(); i++) {
//         if(nums[i] == ans[s]) v.push_back(i);
//         else if(nums[i] == ans[e]) v.push_back(i);
//     }

//     return v;
// }



// vector<vector<int>> threeSum(vector<int>arr) {
//     vector<vector<int>> temp;
//     sort(arr.begin(), arr.end());

//     for(int st=0; st<arr.size(); st++) {
//         if(st-1 >= 0 && arr[st] == arr[st-1]) continue;
//         int mid = st+1;
//         int e = arr.size()-1;

//         while(mid < e) {
//             int sum = arr[st]+arr[mid]+arr[e];
            
//             if(sum < 0) mid++;
//             else if(sum > 0) e--;

//             else{
//                 temp.push_back({arr[st], arr[mid], arr[e]});
//                 mid++;
//                 e--;
//                 while(mid < e && arr[mid] == arr[mid-1]) mid++;
//                 while(mid < e && arr[e] == arr[e+1]) e--;
//             }
//         }
//     }
    
//     return temp;
// }



// vector<int> majorityElement2(vector<int> arr) {
//     if(arr.size() == 1) return {arr[0]};
//     if(arr.size() == 2 && arr[0] != arr[1]) return {arr[0], arr[1]};

//     sort(arr.begin(), arr.end());

//     int count = 1;
//     set<int> Set;

//     for(int i=0; i<arr.size(); i++) {
//         if(i > 0 && arr[i-1] == arr[i]) {
//             count++;
//             if(count > arr.size()/3) Set.insert(arr[i]);
//         }
//         else count = 1;
//     }
//     vector<int> temp;
//     for(auto x: Set) temp.push_back(x);

//     return temp;
// }


int main() {

// // Print double of no.
// int arr[100];  

// int n;
// cout << "How many numbers you want to add in array" << endl;
// cin >> n;

// cout << "Enter the numbers" << endl;
// for(int i=0; i<n; i++) {
//     cin >> arr[i];
// }

// for(int i=0; i<n; i++) {
//     cout << arr[i]*2 << " ";
// }


// // Linear search
// int arr[] = {1,53,3,5,12,10,176,4};
// int size = 8;
// int key;
// cout << "Enter the no. to be searched" << endl;
// cin >> key;

// if(linearSearch(arr, size, key)) cout << "Found" << endl;
// else cout << "Not found";


// // Count 0's and 1's
// int arr[] = {0,0,0,1,1,0,1,0,0,0,1};
// int size = 11;

// count01(arr, size);

// // Max positive integer
// int arr[] = {1,4,65,789,51,7,3,21,878};
// int size = 9;

// findMax(arr, size);

// // Find Min
// int arr[] = {1,4,65,789,51,7,3,21,-21,878};
// int size = 10;

// findMin(arr,size);

// // Print extreme numbers according to position
// int arr[] = {10,20,30,40,50,60,70};
// int size = 7;
// printExtreme(arr, size);


// // Reverse an array
// int arr[] = {10,20,30,40,50,60,70,80};
// int size = 8;
// reverseArray(arr, size);


// // Find unique elements
// int n;
// cout << "enter size-: ";
// cin >> n;
// vector<int>arr(n);

// cout << "enter elements-: ";

// for(int i=0; i<arr.size(); i++) {
//     cin >> arr[i];
// }

// int unique = findUnique(arr);
// cout << "Unique element-: " << unique;


// // Union of 2 arrays
// int arr[] = {2,3,4,8,9,25};
// int brr[] = {1,6,12,15};
// int sizeArr = 6;
// int sizeBrr = 4;
// vector<int>ans;


// for(int i=0; i<sizeArr; i++) {
//     ans.push_back(arr[i]);
// }
// for(int i=0; i<sizeBrr; i++) {
//     ans.push_back(brr[i]);
// }

// for(int i=0; i<ans.size(); i++) {
//     cout << ans[i] << " ";
// }


// // Intersection of 2 arrays 
// vector<int>arr{2,3,6,8,12,25};
// vector<int>brr{1,6,12,15};
// vector<int>ans;

// for(int i=0; i<arr.size(); i++) {
//     for(int j=0; j<brr.size(); j++) {
//         if(arr[i] == brr[j]) ans.push_back(brr[j]);
//         brr[j] = -1;  // to mark the element, suppose if there is only single 6 in brr which is present twice in "arr" then output will contain two 6
//     }
// }

// for(int i=0; i<ans.size(); i++) {
//     cout << ans[i] << " ";
// }



// // Union of 2 arrays with no repeating element
// vector<int>arr{1,3,5,6,7,8};
// vector<int>brr{2,4,7,8};
// vector<int>ans;

// for(int i=0; i<arr.size(); i++) {
//     for(int j=0; j<brr.size(); j++) {
//         if(arr[i] == brr[j]) brr[j] = -1;
//     }
//     ans.push_back(arr[i]);
// }

// for(int i=0; i<brr.size(); i++) {
//     if(brr[i] != -1) ans.push_back(brr[i]);
// }

// for(int i=0; i<ans.size(); i++) {
//     cout << ans[i] << " ";
// }


// // Pair sum(return a pair whose sum is equal to given number)
// int sum;
// cin >> sum;
// vector<int>crr{1,3,5,7,2,4,6};
// vector<int>ans;

// for(int i=0; i<crr.size(); i++) {
//     int flag = 0;
//     for(int j=0; j<crr.size(); j++) {
//         if(crr[i] + crr[j] == sum) {
//             ans.push_back(crr[i]);
//             ans.push_back(crr[j]);
//             flag = 1;
//         }
//     }
//     if(flag) break;
// }

// for(int i=0; i<ans.size(); i++) {
//     cout << ans[i] << " ";
// }
// To find a triplet whose sum = given number => same approach as pair sum, just use 3 nested loops



// // alternate pair sum solution or two sum(leetcode)
// // vector<int> arr = {2,7,11,15};
// vector<int> arr = {3,2,4};
// // vector<int> arr = {3,3};
// int target = 6;

// vector<int> ans = pairSum(arr, target);

// for(auto x: ans) cout << x << " ";
// cout << endl; 



// // 3Sum(leetcode)
// vector<int>arr = {-1,0,1,2,-1,-4};
// // vector<int>arr = {1,1,0};
// // vector<int>arr = {0,0,0,0};
// // vector<int>arr = {-2,1,1};
// // vector<int>arr = {-1,0,1,0};
// // vector<int>arr = {-2,0,1,1,2};

// vector<vector<int>> temp = threeSum(arr);

// for(int i=0; i<temp.size(); i++) {
//     for(int j=0; j<temp[i].size(); j++) {
//         cout << temp[i][j] << " ";
//     }
//     cout << endl;
// }





// // (imp.) Sort 0's and 1's in an array
// vector<int>arr{0,1,1,0,1,0,1,0,1};

// int i = 0;
// int start = 0;
// int end = arr.size()-1;

// while(i != end) {
//     if(arr[i] == 0) {
//         swap(arr[start], arr[i]);
//         i++;
//         start++;
//     }

//     else if(arr[i] == 1) { // or just use else
//         swap(arr[end], arr[i]);
//         end--;
//     }
// }

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }


// // Left rotate the array by 1
// int n;
// cout << "How many times you want to rotate the array ? ";
// cin >> n;

// vector<int>arr = {2,4,6,35,56,85,5,9};

// for(int i=0; i<n; i++) {
//     arr.push_back(arr[0]);

//     arr.erase(arr.begin());
// }

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }

// // Alternate of left roating an array
// vector<int>arr = {2,4,6,35,56,85,5,9};
// int temp = arr[0];
// for(int i=0; i<arr.size()-1; i++) {
//     arr[i] = arr[i+1];
// }

// arr.pop_back();
// arr.push_back(temp);

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }


// Return majority element-: check leetcode submission



// // Majority element || (leetcode)
// // vector<int> arr = {3,2,3};
// // vector<int> arr = {1,2};
// // vector<int> arr = {2,2};
// vector<int> arr = {2,1,1,3,1,4,5,6};

// vector<int> temp = majorityElement2(arr);

// for(auto x: temp) cout << x << " ";
// cout << endl;



// 2-D array

// // taking row wise input
// int arr[4][3];
// int col = 3;
// int row = 4;

// for(int i=0; i<row; i++) {
//     for(int j=0; j<col; j++) {
//         cin >> arr[i][j];
//     }
// }

// // Taking input column wise
// for(int i=0; i<col; i++) {
//     for(int j=0; j<row; j++) {
//         cin >> arr[j][i];
//     }
// }

// for(int i=0; i<row; i++) {
//     for(int j=0; j<col; j++) {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }


// // print row sum
// int arr[4][3] = {{2,3,5}, {5,7,12},{5,9,1},{12,21,54}};
// int row = 4;
// int col = 3;

// rowWiseSum(arr, row, col); 


// // column wise sum
// int arr[4][3] = {{2,3,5}, {5,7,12},{5,9,1},{12,21,54}};
// int row = 4;
// int col = 3;

// colWiseSum(arr, row, col);


// // 2-D Linear search
// int arr[4][3] = {{2,3,5}, {5,7,12},{5,9,1},{12,21,54}};
// int row = 4;
// int col = 3;
// int key;
// cin >> key;

// if(linearSearch(arr, row, col, key)) cout << "True" << endl;
// else cout << "false";


// // max in an array
// int arr[4][3] = {{2,3,5}, {5,7,12},{5,9,1},{12,21,54}};
// int row = 4;
// int col = 3;

// findMax(arr, row, col);


// // Transpose 2-D array
// int arr[3][3] = {{2,3,5}, {6,7,12},{5,9,1}};
// int row = 3;
// int col = 3;
// int transposeArr[3][3];

// transposeArray(arr, row, col, transposeArr);

// NOTE-: if we try to transpose inside the same array then double swapping is happening that's why initial array gets printed


// // 2-d array 
// vector<vector<int> > arr(5,vector<int>(5,-1));

// for(int i=0; i<arr.size(); i++) {
//     for(int j=0; j<arr[i].size(); j++) {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// Questions-:
// // 1-: sort 0,1 and 2's in an array 
// we can also use STL inbuilt sort method{ sort(arr.begin(), arr.end())}
// // vector<int> arr{0,1,1,2,1,0,1,0,2,2};
// vector<int> arr{2,0,2,1,1,0};
// int lo = 0;
// int mid = 0;
// int hi = arr.size()-1;

// while(mid != hi) {
//     if(arr[mid] == 0) swap(arr[mid++], arr[lo++]);

//     else if(arr[mid] == 1) mid++;

//     else swap(arr[mid], arr[hi--]);
// }

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }



// // 2(a)-: move all negative numbers to the right of an array
// vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
// int start = 0;
// int end = arr.size()-1;

// while(start <= end) {
//     if(arr[start] > 0) start++;
//     else swap(arr[start], arr[end--]);
// }


// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }



// // 2(b)-: move all negative numbers to the left of an array
// vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
// int start = 0;
// int end = arr.size()-1;

// while(start < end) {
//     if(arr[start] < 0) start++;

//     else if(arr[end] > 0) end--;

//     swap(arr[start], arr[end]);
// }


// // 2(c)-: move all negative numbers to the end of an array wihtout changing the order of the numbers
// vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
// vector<int> copy(arr.size());
// int start = 0;

// // store all the +ve in copy
// for(int i=0; i<arr.size(); i++) {
//     if(arr[i] > 0) {
//         copy[start] = arr[i];
//         start++;
//     }
// }

// // store all -ve in copy array
// for(int i=0; i<arr.size(); i++) {
//       if(arr[i] < 0) {
//         copy[start] = arr[i];
//         start++;
//     }
// }

// for(int i=0; i<arr.size(); i++) {
//     arr[i] = copy[i];
// }

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }


// // 3-: find the duplicate number (range => 1 - arr.size())
// // vector<int>arr{1,3,4,2,2};
// vector<int>arr{3,1,3,4,2};

// // check all the methods for this solution
// cout << findDuplicate(arr);


// 4-: find the missing element, {integer range is (1,n)}
// vector<int>nums{1,2,4,6,3,7,8};
// vector<int>nums{1,2,3,5};

// // using hashing
// vector<int>hash(nums.size()+1,0);


// for(int i=0; i<nums.size(); i++) {
//     // cout << nums[i] << endl;
//     hash[nums[i]-1] = nums[i];
// }


// for(int i=0; i<nums.size(); i++) {
//     if(hash[i] == 0) {
//         cout << i+1;
//         break;
//     }
// }


// // 4(b)-: solution with o(1) space complexity
// int n = nums.size()+1;
// int expectedSum = (n*(n+1))/2;
// int actualSum = 0;

// for(int i=0; i<n-1; i++) {
//     actualSum += nums[i];
// }

// cout <<  expectedSum - actualSum;


// // 4(c) with O(n) time complexity
// // vector<int>nums{1,3,5,3,4};
// vector<int>nums{5,3,3,3,1};
// int i=0;
// while(i<nums.size()) {
//     if(nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
//     else i++;
// }

// for(int i=0; i<nums.size(); i++) {
//     if(nums[i] != i+1) cout << i+1 << " ";
// }



// // 5(a)-: find the first repeating elemnt in an array
// vector<int>arr{10, 5, 3, 4, 3, 5, 6};
// for(int i=0; i<arr.size(); i++) {
//     for(int j=i+1; j<arr.size(); j++) {
//         if(arr[i] == arr[j]) {
//             cout << arr[i];
//             return 0;
//         }
//     }
// }



// // 5(b)-: time O(n), space O(n)
// vector<int>arr{1,5,3,4,3,5,4};
// unordered_map<int, int>hash;

// for(int i=0; i<arr.size(); i++) {
//     hash[arr[i]]++;
// }

// for(int i=0; i<arr.size(); i++) {
//     if(hash[arr[i]] > 1) {
//         cout << i+1;
//         break;
//     }
// }



// // 5(c)-: creating a unordered map using vecto
// vector<int>arr{1,2,3,4,3,5,4};
// int max = INT_MIN;
// for(int i=0; i<arr.size(); i++) {
//     if(arr[i] > max) max = arr[i];
// }
// vector<int>hash(max,0);
// for(int i=0; i<arr.size(); i++) {
//     hash[arr[i]]++;
// }


// for(int i=0; i<arr.size(); i++) {
//     if(hash[arr[i]] > 1) {
//         cout << i+1;
//         return 1;
//     }
// }
 

// // 6-: find the common element in 3 arrays
// vector<int>arr1{1, 5, 10, 20, 40, 80};
// vector<int>arr2{6, 7, 20, 80, 100};
// vector<int>arr3{3, 4, 15, 20, 30, 70, 80, 120};

// int n1 = arr1.size();
// int n2 = arr2.size();
// int n3 = arr3.size();
// int i = 0, j = 0, k = 0;

// while(i<n1 && j<n2 && k<n3) {
//     if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
//         cout << arr1[i] << " ";
//         i++;
//         j++;
//         k++;
//     }
    
//     else if(arr1[i] < arr2[j]) i++;

//     else if(arr2[j] < arr3[k]) j++;
    
//     else k++;
// }


// // 7-: factorial of a large number 
// int n;
// cout << "enter the no. ";
// cin >> n;
// vector<int>arr;
// arr.push_back(1);

// for(int i=2; i<=n; i++) {
//     int carry = 0;   
//     for(int j=0; j<arr.size(); j++) {
//         int val = arr[j]*i + carry;
//         arr[j] = val%10;
//         carry = val/10;
//     }
//     while(carry != 0) {
//         arr.push_back(carry%10);
//         carry /= 10;
//     }
// }


// reverse(arr.begin(),arr.end());

// for(auto x : arr) {
//     cout << x;
// }


// // 8-: spiral print 
// int m,n;
// cout << "enter rows-: ";
// cin >> m;
// cout << "enter columns-: ";
// cin >> n;
// vector<vector<int> >matrix (m, vector<int>(n));
// vector<int>arr;

// // taking input
// for(int i=0; i<m; i++) {
//     for(int j=0; j<n; j++) {
//         cin >> matrix[i][j];
//     }
// }


// int left = 0, right = n-1;
// int top = 0, bottom = m-1;

// while(left<=right && top<=bottom) {
//     for(int i=left; i<=right; i++) {
//         arr.push_back(matrix[top][i]);
//     }
//     top++;

//     for(int i=top; i<=bottom; i++){
//         arr.push_back(matrix[i][right]);
//     }
//     right--;


//     // check if elements are left in the last row
//     if(top <= bottom) {
//         for(int i=right; i>=left; i--) {
//             arr.push_back(matrix[bottom][i]);
//         }
//         bottom--; 
//     }

//     // check if elements are left in the last column
//     if(left <= right) {
//         for(int i=bottom; i>=top; i--) {
//             arr.push_back(matrix[i][left]);
//         }
//         left++;
//     }
// }

// for(int i=0; i<arr.size(); i++) {
//     cout << arr[i] << " ";
// }


// // 9-: wave print 2-d array
// vector<vector<int> >matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

// for(int i=0; i<matrix.size(); i++) {
//     for(int j=0; j<matrix[i].size(); j++) {
//         cout << matrix[i][j] << " ";
//     }
//     cout << endl;
// }

// for(int i=0; i<matrix.size(); i++) {
//     int row;
//     if(i%2 == 0) row = 0;
//     else row = matrix.size()-1;
//     for(int j=0; j<matrix[i].size(); j++) {
//         cout << matrix[row][i] << " ";
//         if(i%2 == 0) row++;
//         else row--;
//     }
//     cout << endl;
// }



// 10-: Remove duplicate elements from a sorted array
vector<int>arr{2,4,6,6,7,9,12,17,17};
// vector<int>arr{2,2,2,2,2};
int n = arr.size();
vector<int>hash(n);

int j=0;
for(int i=0; i<n-1; i++) {
    if(arr[i] != arr[i+1]) hash[j++] = arr[i];
}
hash[j++] = arr[n-1];

for(int i=0; i<n; i++) {
    arr[i] = -200;
}

for(int i=0; i<j; i++) {
    arr[i] = hash[i];
} 
for(int x : arr) cout << x << " ";
cout << endl;
cout << j;



return 0;

}
