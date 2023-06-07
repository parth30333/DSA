// // minimum time difference
// vector<string> timePoints = {"23:59", "22:10"};
// // vector<string> timePoints = {"00:00","23:59", "00:00"};

// cout << minTimeDiff(timePoints);


// // palindromic substrings
// // string s = "abc";
// string s = "aaa";

// cout << palindromicSubStr(s);
    
    
    
// // custom sort
// // string s = "abcd";
// // string order = "cba";
// // string s = "abcd";
// // string order = "cbafg";
// string s = "pekeq";
// string order = "kqep";

// cout << customSort(s, order);


// // alien dictionary
// // vector<string> arr = {"hello","leetcode"};
// // string s = "hlabcdefgijkmnopqrstuvwxyz";
// // vector<string> arr = {"word","world","row"};
// // string s = "worldabcefghijkmnpqstuvxyz";
// vector<string> arr = {"kuvp","q"};
// string s = "ngxlkthsjuoqcpavbfdermiywz";

// cout << alienDictionary(arr, s);


// // Longest word in dictionary through deleting
// vector<string> words = {"ale","apple","monkey","plea"};
// string s = "abpcplea";
// cout << longestStringDeleting(words,s);



// // isomorphic
// string s = "paper";
// string t = "title";

// cout << isomorphic(s,t);


// // Re-Organize string
// // string s = "aab";
// // string s = "aaab";
// // string s = "vvvlo";
// string s = "baaba";

// cout << reOrganize(s);


// // Group Anagrams
// vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

// vector<vector<string>> temp = groupAnagrams(strs);

// for(int i=0; i<temp.size(); i++) {
//     for(int j=0; j<temp[i].size(); j++) {
//         cout << temp[i][j] << " ";
//     }
//     cout << endl;
// }



// // Longest palindromic substring
// // string s = "babad";
// string s = "cbbd";


// cout << longestPalindromicSubStr(s);
 
 
// // find index of the first occurrence in a string
// // string hay = "sadbutsad";
// // string n = "sad";
// string hay = "leetcode";
// string n = "leeto";

// cout << strStr(hay, n);
 

// // ATOI
// // string s = "42";
// string s = "   -42__";

// cout << atoi(s);


// // String compression
// // vector<char> arr = {'a','a','b','b','c','c','c'};
// // vector<char> arr = {'a'};
// vector<char> arr = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

// cout << strCompression(arr);

 
// // zig-zag Conversion
// string s = "PAYPALISHIRING";
// int numRows = 3;

// cout << zizzagConversion(s, numRows);


// // vector<int> arr = {1,3,2,5,5};
// vector<int> arr = {2,3,5,2,4};

// cout << findMissingElement(arr);

//////////////////////////
// vector<int> arr = {1,3,2,7,7,5};
// vector<int> arr = {4,2,8,6,15,5,9,20};

// // second smallest Number and second largest number
// int min = INT_MAX, secondMin = INT_MAX, max = INT_MIN, secondMax = INT_MIN;

// for(int i=0; i<arr.size(); i++) {
//     if(arr[i] < min) min = arr[i];
//     if(arr[i] > max) max = arr[i]; 
// }

// for(int i=0; i<arr.size(); i++) {
//     if(arr[i] < secondMin && arr[i] != min) secondMin = arr[i];
//     if(arr[i] > secondMax && arr[i] != max) secondMax = arr[i];
// }

// cout << secondMin << " " << secondMax;



////////////////////////
// map<int, int> mp;
// for(int i=0; i<arr.size(); i++) {
//     mp[arr[i]]++;
// }

// // for(auto it = mp.begin(); it != mp.end(); it++) {
// //     cout << it->first << "-: " << it->second << endl;
// // }

// // or
// for(auto x: mp) cout << x.first << " => " << x.second << endl;



// // rotate by K to right
// vector<int> arr = {1,2,3,4,5,6,7};
// int k = 3;

// vector<int> temp(arr.size());
// for(int i=0; i<arr.size(); i++) temp[i] = arr[i];

// for(int i=0; i<arr.size(); i++) {
//     arr[i] = temp[(i+k)%arr.size()];
// // to rotate on left arr[(i+k)%arr.size()] = temp[i];
// }

// for(auto x: arr) cout << x << " ";



// // median of an array
// // vector<int> arr = {2,1,3,5,4};
// vector<int> arr = {2,1,7,5};

// cout << median(arr);


//////////////////
vector<int> arr = {2,3,1,9,3,1,3,9};
map<int, int> mp;