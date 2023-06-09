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
vector<int> majorityElemen2(vector<int> arr) {
    map<int , int> mp;
    for(auto x: arr) mp[x]++;

    vector<int> temp;
    for(int i=0; i<arr.size(); i++) {
        if(mp[arr[i]] > arr.size()/3) {
            temp.push_back(arr[i]);
            mp[arr[i]] = 0;
        }
    }
    return temp;
}


int main() {
// Majority Element 2
vector<int> arr = {3,2,3};

vector<int> temp = majorityElemen2(arr);

for(auto x: temp)  cout << x << " ";
cout << endl;

return 0;   
}
