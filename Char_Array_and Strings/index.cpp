#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>
#include<climits>
#include<string>
#include<cstring>
#include<unordered_map>
#include<map>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;


// int getLength(char arr[]) {
//     int i = 0;

//     while(arr[i] != '\0') {
//         i++;
//     } 
//     return i;
// }

void reverse(char arr[]) {
    int s = 0;
    int e = strlen(arr)-1;

    while(s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}



// void putCharacter(char arr[]) {
//     int length = strlen(arr);

//     for(int i=0; i<length; i++) {
//         if(arr[i] == ' ') arr[i] = '@';
//     }
// }




// bool isPalindrome(char arr[]) {
//     int i = 0;
//     int j = strlen(arr)-1;

//     while(i<=j) {
//         if(arr[i] != arr[j]) return false;
//         else {
//             i++;
//             j--;
//         }
//     } 
//     return true;
// }


// void convertToUppercase(char arr[]) {
//     int length = strlen(arr);
    
//     for(int i=0; i<length; i++) {
//         if(arr[i] >= 'a' && arr[i] <= 'z') arr[i] = arr[i] - 'a' + 'A';
//         else continue;
//     }
// }

// void convertToLowerCase(char arr[]) {
//     int length = strlen(arr);
    
//     for(int i=0; i<length; i++) {
//         if(arr[i] >= 'A' && arr[i] <= 'Z') arr[i] = arr[i] - 'A' + 'a';
//         else continue;
//     }
// }



// int romanToIntegers(string str) {
//     map<char, int> romanValues;
//     romanValues['I'] = 1;
//     romanValues['V'] = 5;
//     romanValues['X'] = 10;
//     romanValues['L'] = 50;
//     romanValues['C'] = 100;
//     romanValues['D'] = 500;
//     romanValues['M'] = 1000;

//     int sum = 0;
//     for(int i=0; i<str.length(); i++) {
//         int key = str[i];
//         // if(i-1 >= 0 && romanValues[key]%5 == 0 && romanValues[str[i-1]] < romanValues[key]) {
//         //     sum = sum - romanValues[str[i-1]] + (romanValues[key] - romanValues[str[i-1]]);
//         // }  this condition also works

//         if(i+1 < str.length() && romanValues[key] < romanValues[str[i+1]]) {
//             sum -= romanValues[key];
//         }
//         else sum += romanValues[key];
//     }    
//     return sum;
// }


// string longestString(vector<string> arr) {
//     int longIndex = 0;
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[longIndex].length() < arr[i].length()) longIndex = i;
//     }

//     return arr[longIndex];
// }



// string longestCommonPrefix(vector<string>arr) {
//       // string str = "";
//       // for(int i=0; i<arr[0].size(); i++) {
//       //   char ch = arr[0][i];
//       //   bool match = true;

//       //   for(int j=0; j<arr.size(); j++) {
//       //     if(ch != arr[j][i]){
//       //       match = false;
//       //       break;
//       //     }
//       //   }
//       //   if(match == false) break;
//       //   else str.push_back(ch);
//       // } 
      
//       // return str;
    
    
    
//     // alternate solution-: if we sort the array then we can assume that first string and last string in the array will have the most different prefixes of all the comparisons that could  be made between strings in the array. 
//     sort(arr.begin(), arr.end());
//     string str = "";
//     string first = arr[0], last = arr[arr.size()-1];

//     for(int i=0; i<min(first.length(), last.length()); i++) {
//         if(first[i] != last[i]) return str;
//         str += first[i];
//     }
//     return str;
// }


// string removeAdjacentDuplicates(string s) {
//     string ans = "";
//     int i=0;

//     while(i < s.length()) {
//         if(ans.length()-1 > 0 && ans[ans.length()-1] == s[i]) ans.pop_back();
//         else ans.push_back(s[i]);
//         i++;
//     }
//     return ans;
// }



// string removeOccurrences(string s, string part) {
//     // string ans = "";

//     // for(int i=0; i<s.length(); i++) {
//     //     ans.push_back(s[i]);
//     //     int lenAns = ans.length();
//     //     int lenPart = part.length();

//     //     if(lenAns >= lenPart) {
//     //         string subString = ans.substr(lenAns-lenPart, lenPart);
//     //         if(subString.compare(part) == 0) ans.replace(lenAns-lenPart, lenPart, "");
//     //     }
//     // }
//     // return ans;


//     // alternate
//     int pos = s.find(part);

//     while(pos != string::npos) {
//         s.erase(pos, part.length());
//         pos = s.find(part);
//     }
//     return s;
// }


// bool isPalindrome2(string s, int i, int j) {
//     while(i<=j) {
//         if(s[i] != s[j]) return false;
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

// bool validPalindrome2(string s) {
//     // for(int i=0; i<s.length(); i++) {
//     //     char temp = s[i];
//     //     s.erase(i, 1);
//     //     if(isPalindrome2(s) == true) return true;
//     //     s.insert(i, 1,temp);
//     // }
//     // return false;

//     // time limit exceeded for 1st solution


//     int i=0; 
//     int j = s.length()-1;

//     while(i<=j) {
//         if(s[i] != s[j]) {
//             return (isPalindrome2(s, i+1, j) || isPalindrome2(s, i,j-1));
//         }
//         else {
//             i++;
//             j--;
//         }
//     }
//     return true;
// }



// int findMinTImeDifference(vector<string>timePoints) {
//     vector<int>minutes;

//     for(int i=0; i<timePoints.size(); i++) {
//         int hours = stoi(timePoints[i].substr(0,2));
//         int min = stoi(timePoints[i].substr(3,2));
//         minutes.push_back(hours*60 + min);
//     }

//     sort(minutes.begin(), minutes.end());
//     for(auto x: minutes) cout << x << " "; 
//     cout << endl;

//     int minimum = INT_MAX;
//     for(int i=0; i<minutes.size()-1; i++) {
//         int diff = minutes[i+1] - minutes[i];
//         minimum = min(diff,minimum);
//     }
//     // when there is only one time("00:xx") where hour = 0 then in minutes array it will be first index 
//     int lastDiff = minutes[0] + 1440 - minutes[minutes.size()-1];
//     return min(minimum, lastDiff);
// }


// int expandAround(string s, int left, int right) {
//     int count = 0;
//     while(left >= 0 && right<s.length() && s[left] == s[right]) {
//         count++;
//         left--;
//         right++;
//     }
//     return count;
// }


// int countPalindromicSubStrings(string s) {
//     int count = 0;
//     for(int center=0; center < s.length(); center++) {
//         // when string is odd
//         int oddExpand = expandAround(s, center, center);
//         count += oddExpand;
        
//         // when string is even
//         int evenExpand = expandAround(s, center, center+1);
//         count += evenExpand;
//     }
//     return count;
// }

// bool cmp(string a, string b) {
//     string s1 = a+b;
//     string s2 = b+a;
//     return s1>s2;
// }

// string largestNumberString(vector<int>nums) {
//     vector<string>temp;
//     for(auto x: nums) temp.push_back(to_string(x));

//     sort(temp.begin(), temp.end(), cmp);
//     if(temp[0] == "0") return "0";

//     string main = "";
//     for(auto x: temp) main += x;

//     return main;
// }


// string customSorting(string order, string s) {
//     string extra = "";
//     string same = "";
//     vector<int> charCount(26,0);

//     // add character count of "s" in charCount
//     for(auto x: s) charCount[x-'a']++;

//     // add characters in "s" that are not in order to extra
//     for(int i=0; i<s.length(); i++) {
//         if(order.find(s[i]) == string::npos) extra += s[i];
//     }

//     // add character that are in "order" as well as "s"(or charCount) to "same" string as per the order of "order" string
//     for(int i=0; i<order.length(); i++) {
//         int  index = order[i]-'a'; 
//         while(charCount[index] > 0) {
//             same += order[i];
//             charCount[index]--;
//         }
//     }
//     return same+extra;
// }


// bool isLexographicalSorted(vector<string>words, string order) {
//     vector<int>orderCount(26,0);

//     for(int i=0; i<order.size(); i++) orderCount[order[i]-'a'] = i;

//     for(int i=0; i<orderCount.size(); i++) cout << order[i] << "-: " << orderCount[order[i]-'a'] << " ";
//     cout << endl;
//     cout << min(words[0].size(), words[1].size()) << endl;  

//     for(int i=0; i<words.size()-1; i++) {
//         bool flag = false;

//         string first = words[i];
//         string second = words[i+1];
//         for(int j=0; j<min(words[i].size(), words[i+1].size()); j++) {
//             if(orderCount[first[j]-'a'] < orderCount[second[j]-'a']) {
//                 flag = true;
//                 break;
//             }
//             else if(orderCount[first[j]-'a'] > orderCount[second[j]-'a']) return false;
//         }
//         if(first.length() > second.length() && !flag) return false;
//     }
//     return true;
// }


//     bool canFormByDeleting(string word, string str) {
//     int word_i = 0, str_i = 0;
    
//     while (word_i < word.size() && str_i < str.size()) {
        
//         if (word[word_i] == str[str_i])
//             word_i++; 
        
    //     else str_i++;
//     }
    
//     return word_i == word.size();
// }

// string findLongestWordDictionary(vector<string> d, string s) {
//     string res = "";
    
//     for (auto str : d) {
        
//         if (canFormByDeleting(str, s)) {
//             cout << "str-: " <<  str << "  ";
//             if (str.size() > res.size() || (str.size() == res.size() && str < res))
//                 res = str;
//                 cout << "res-: " << res << endl;
//         }
//     }

//     return res;
// }


// bool isAnagram(string s, string t) {
//     // if(s.length() != t.length()) return false;

//     // for(int i=0; i<t.length(); i++) {
//     //     if(s.find(t[i]) == string::npos) return false;
//     //     s.erase(s.find(t[i]),1);
//     // }
//     // return true;

//     // alternate
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     return s==t;
// }


// string reverseOnlyLetters(string s) {
//     int i=0;
//     int j=s.length()-1;

//     while(i<=j) {
//         if(!isalpha(s[i])) {i++; continue;}
//         if(!isalpha(s[j])) {j--; continue;}

//         else {
//             swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//     }
//     return s;
// }


// string reverseVowel(string s) {
//     string vowel = "aeiouAEIOU";
//     int i=0;
//     int j=s.length()-1;

//     while(i<=j) {
//         if(vowel.find(s[i]) == string::npos) {i++; continue;}
//         if(vowel.find(s[j]) == string::npos) {j--; continue;}

//         else {
//             swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//     }
//     return s;
// }



// bool isomorphicStrings(string s, string t) {
//     // if(s.length() != t.length()) return false;

//     // bool flag = false;
//     // for(int i=0; i<s.length(); i++) {
//     //     for(int j=i+1; j<s.length(); j++) {
//     //         if((s[i] == s[j] && t[i] != t[j]) || (s[i] != s[j] && t[i] == t[j])) {
//     //             flag = true;
//     //             break;
//     //         }
//     //     }
//     //     if(flag == true) return false;
//     // }
//     // return true;


//     // Alternate
//     if(s.length() != t.length()) return false;
//     unordered_map<char, char> mp, m2;

//     for(int i=0; i<s.length(); i++) {
//         if(mp[s[i]] && mp[s[i]] != t[i]) return false;
//         if(m2[t[i]] && m2[t[i]] != s[i]) return false;
//         mp[s[i]] = t[i];
//         m2[t[i]] = s[i];
//     }

//     return true;
// }


// string reOraganizeString(string s) {
//     vector<int> temp(26,0);
//     for(int i=0; i<s.length(); i++) temp[s[i]-'a']++;

//     int max = INT_MIN;
//     int maxIndex = 0;
//     for(int i=0; i<temp.size(); i++) {
//         if(temp[i] > max) {
//             max = temp[i];
//             maxIndex = i;
//         }
//     }

//     int index=0;
//     while(max > 0 && index < s.length()) {
//         s[index] = maxIndex+'a';
//         index = index+2;
//         max--;
//     }
//     if(max > 0) return "";

//     temp[maxIndex] = 0;
//     for(int i=0; i<26; i++) {
//         while(temp[i] > 0) {
//             index = index >= s.length() ? 1 : index;
//             s[index] = i+'a';
//             temp[i]--;
//             index += 2;
//         }
//     }

//     return s;
// }



// vector<int> createHash(string s) {
//     vector<int>hash(26,0);
//     for(auto ch: s) hash[ch-'a']++;

//     return hash;
// }




// vector<vector<string> > groupAnagrams(vector<string> strs) {
//     // // 1-: T.C = O(N*Klogk), S.C  = O(Nk), k = length of longest string
//     // map<string, vector<string>> mp;

//     // for(auto str: strs) {
//     //     string s = str;
//     //     sort(s.begin(), s.end());
//     //     mp[s].push_back(str); // because value in map is a vector
//     // }

//     // vector<vector<string>> group;
//     // for(auto it = mp.begin(); it != mp.end(); it++) {
//     //     group.push_back(it-> second);
//     // }
//     // return group;

//     // 2-: alternate {T.C = O(nK), k = length of longest string in "strs" , S.C = O(nk), because in cretehash() function size is constant, and hash map size depends upon longest string size}
//     map<vector<int>, vector<string>> mp;

//     for(auto str: strs) {
//         mp[createHash(str)].push_back(str);
//     }

//     vector<vector<string>> group;
//     for(auto it = mp.begin(); it != mp.end(); it++) {
//         group.push_back(it-> second);
//     }
//     return group;
// }



// string isPalindromeLongest(string s, int i, int j) {
//     string tempAns = "";
//     while(i >= 0 && j < s.length()) {
//         // cout << " i-: " << i << " j-: " << j << endl; 
//         if(s[i] == s[j] && s.substr(i, j-i+1).length() > tempAns.length()) {
//             tempAns = s.substr(i, j-i+1);
//             // cout << "subString-: " << s.substr(i, j-i+1) << endl;
//         }

//         i--;
//         j++;   
//     }
//     return tempAns;    
// }



// bool isPalindromeLongest(string s, int i, int j) {
//     while(i<=j) {
//         if(s[i] != s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }


// string longestPalindromicSubString(string s) {
//     string ans = "";

//     for(int i=0; i<s.length(); i++) {
//         for(int j=i; j<s.length(); j++) {
//             if(isPalindromeLongest(s,i,j)) {
//                 string temp = s.substr(i, j-i+1);
//                 ans = temp.length() > ans.length() ? temp : ans;
//             }
//         }
//     }

//     return ans;
//     // this solution gives "TLE" on leetcode, to solve this problem without TLE we need to know Dynamic Programming
// } 




// int hayStackNeedle(string h, string nd) {
//     // string temp = "";
//     // for(int i=0; i<h.length(); i++) {
//     //     for(int j=i; j<h.length(); j++) {
//     //         temp += h[j];
//     //         if(temp ==  nd) return i; 
//     //     }
//     //     temp = "";
//     // }
//     // return -1;

    
//     // // alternate
//     // int i=0;
//     // int j=nd.length()-1;

//     // while(i<h.length()) {
//     //     if(h.substr(i, j+1) == nd) return i;
//     //     i++;
//     // }
//     // return -1;


//     ///////////////////
//     // alternate
//     if(h.find(nd) == string::npos) return -1;

//     return h.find(nd);
// }



// int myAtoi(string s) {
//     s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
//     int sign = 1;
//     int ans = 0; 

//     for(int i=0; i<s.length(); i++) {
//         if(ans > INT_MAX/10 || (ans == INT_MAX) && s[i] > '7') {
//             return sign == -1 ? INT_MIN : INT_MAX;
//         }
//         if(s[i] == '-') sign = -1;
//         if(isdigit(s[i])) ans = ans*10 + (s[i]-'0');
//     }

//     return ans*sign;
// }


// int stringCompress(vector<char> chars) {
//     string temp = "";
//     int i=0;

//     while(i<chars.size()) {
//         int count = 1;
//         int j = i+1;
//         while(j < chars.size()) {
//             if(chars[i] == chars[j]) {
//                 count++;
//                 j++;
//             }
//             else break;
//         }
//         if(count > 1) temp += chars[i] + to_string(count);
//         else temp += chars[i];
//         i = j;
//         cout << "i-: " << i << " j-: " << j << endl;
//     }

//     chars.resize(temp.length());

//     for(int i=0; i<chars.size(); i++) chars[i] = temp[i];


//     for(auto x: chars) cout << x << " ";
//     cout << endl;

//     return chars.size();
// }


string zigzagStringConversion(string s, int n) {
    if(n == 1) return s;
    
    vector<string>zigzag(n);
    int row = 0, i=0;
    bool direction = true;

    while(true) {
    if(direction) {
        while(row < n && i<s.length()) {
            zigzag[row++].push_back(s[i++]); 
            cout << zigzag[row] << " " << i << endl;
        }
    row = row - 2;
    }
    else {
        while(row >= 0 && i<s.length()) {
            cout << zigzag[row] << " " << i << endl;
            zigzag[row--].push_back(s[i++]);
        }
        row = 1;
    }
    if(i >= s.length()) break;
    direction = !direction;    
    }

    string ans = "";
    for(int i=0; i<zigzag.size(); i++) ans += zigzag[i];

    return ans;
}






int main() {
// char name[100];
// cout <<  "Enter your name-: ";
// // cin >> name;

// // cout << "Your name is-: " << name;
// cin.getline(name, 50);


// // length of an char Array
// cout << "Length of char Array is-: " << getLength(name);



// // Reverse a string
// char name[100];
// cin >> name;

// cout << "Initially char array was-: " << name << endl;
// reverse(name);
// cout << "Reverse Char array is-: " << name;


// // put a character when there is space
// char sentence[100];
// cin.getline(sentence, 75);

// cout << "Initially char array was-: " << sentence << endl;
// putCharacter(sentence);
// cout << "After putting character at space-: " << sentence;




// // If string is Palindrome
// char arr[100];
// cin >> arr;

// cout << "char Array is-: " << isPalindrome(arr);



// // lower to UPPER case
// char arr[100];
// cin >> arr;

// convertToUppercase(arr);
// cout << arr;


// // UPPER to lower case
// char arr[100];
// cin >> arr;

// convertToLowerCase(arr);
// cout << arr;



// // Roman number to integers
// // string str = "III";
// string str = "MCMXCIV";
// // string str = "LVIII";

// cout << romanToIntegers(str);



// // Longest string in an array
// vector<string> arr = {"flower", "flow", "fighter"};

// cout << longestString(arr);


// // Longest common prefix
// vector<string>arr = {"flower", "flow", "flight"};

// cout << longestCommonPrefix(arr);



// // Remove adjacent duplicates in string
// // string s = "abbaca";
// // string s = "azxxzy";
// string s = "aaaaaaaa";

// cout <<  removeAdjacentDuplicates(s);




// // Remove all occurrences of a substring
// // string str = "daabcbaabcbc";
// string str = "axxxxyyyyb";
// string part = "xy";

// cout << removeOccurrences(str, part);




// // valid palindrome 2(leetcode)
// // string s = "aba";
// // string s = "abc";
// // string s = "abca";
// string s = "abb";

// cout << validPalindrome2(s);



// // find the minimum minutes difference  between any 2 time points
// // vector<string> timePoints = {"00:00","23:58", "00:00"};
// // vector<string> timePoints = {"05:31","22:08", "00:35"};
// vector<string> timePoints = {"23:58", "00:00"};
// // vector<string> timePoints = {"12:12", "00:13"};
// // vector<string> timePoints = {"23:58", "00:00", "23:57", "23:56", "23:21"};

// cout << findMinTImeDifference(timePoints);





// // palindromic substrings(leetcode)
// // string s = "abc";
// string s = "aaa";
// // string s = "ab";

// cout << countPalindromicSubStrings(s);




// // Largest number(leetcode)

// // vector<int>nums = {10,2};
// // vector<int>nums = {3,30, 34, 5, 9};
// // vector<int>nums = {34325, 3432};
// // vector<int>nums = {343225, 3432};
// // vector<int>nums = {34323, 3432};
// // vector<int>nums = {3432, 3532};
// // vector<int>nums = {432, 43243};
// vector<int>nums = {0};

// cout << largestNumberString(nums); 




// // Custom sort string(leetcode)
// // string order = "kqep";
// // string s = "pekeq";
// // string order = "cba";
// // string s = "abcd";
// string order = "jftiugkz";
// string s = "kfiukutzjg";

// cout << customSorting(order, s);
    

    
    
// // verifying an alien dictionary(leetcode)
// // vector<string> words = {"hello", "leetcode"};
// // string order = "hlabcdefgijkmnopqrstuvwxyz";
// // vector<string> words = {"apple","app"};
// // string order = "abcdefghijklmnopqrstuvwxyz";
// // vector<string> words = {"word", "world", "row"};
// // string order = "worldabcefghijkmnpqstuvxyz";
// // vector<string> words = {"kuvp","q"};
// // string order = "ngxlkthsjuoqcpavbfdermiywz";

// vector<string> words = {"hello","hello"};
// string order = "abcdefghijklmnopqrstuvwxyz";

// cout << isLexographicalSorted(words, order);
    
    


//  //  Longest word in dictionary through deleting
// // string s = "abpcplea";
// // vector<string> dictionary = {"ale","apple","monkey","plea"};

// // string s = "abce";
// // vector<string> dictionary = {"abe","abc"};

// string s = "aewfafwafjlwajflwajflwafj";
// vector<string> dictionary = {"apple","ewaf","awefawfwaf","awef","awefe","ewafeffewafewf"};

// // string s = "abpcplea";
// // vector<string> dictionary = {"kick", "dick"};

// // string s = "abpcplea";
// // vector<string> dictionary = {"apple", "apple", "parth"};

// // string s = "abpcplea";
// // vector<string> dictionary = {"a","b","c"};
    

// cout << findLongestWordDictionary(dictionary, s);
    


// // valid Anagram
// // string s = "anagram";
// // string t = "nagaram";
// string s = "aacc";
// string t = "ccac";
   
// cout << isAnagram(s,t);



// // Reverse only letters
// // string s = "ab-cd";
// // string s = "a-bC-dEf-ghIj";
// // string s = "Test1ng-Leet=code-Q!";
// string s = "-S2,_";
// cout << reverseOnlyLetters(s);



// // reverse Vowels
// string s = "hello";
// // string s = "leetcode";
// cout << reverseVowel(s);



// // Isomorphic strings(leetcode)
// string s = "egg";
// string t = "add";
// // string s = "foo";
// // string t = "bar";
// // string s = "paper";
// // string t = "title";
// // string s = "badc";
// // string t = "baba";
// // string s = "ab";
// // string t = "ab";


// cout << isomorphicStrings(s,t);




// // re Organize string(leetcode)
// // string s = "aab";
// // string s = "aaabc";
// // string s = "aaab";
// // string s = "abbbc";
// // string s = "abbbsbc";
// // string s = "baaba";
// // string s = "ab";
// // string s = "bfrbs";
// // string s = "zhmyo";
// string s = "zifrfbctby";

// cout << reOraganizeString(s);




// // Group anagrams-:
// vector<string>strs = {"eat","tea","tan","ate","nat","bat"};

// vector<vector<string> > ans = groupAnagrams(strs);

// for(int i=0; i<ans.size(); i++) {
//         for(int j=0; j<ans[i].size(); j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }





// // Longest Palindromic Substring(leetcode)
// // string s = "babad";
// // string s = "cbbd";
// // string s = "ab";
// string s = "aacabdkacaa";

// cout << longestPalindromicSubString(s);



// // Find the index of the first occurrence in a string
// string haystack = "sadbutsad";
// string needle = "sad";
// // string needle = "but";

// // string haystack = "leetcode";
// // string needle = "code";

// cout << hayStackNeedle(haystack, needle);




// // convert string to int(atoi) (leetcode)
// // string s = "42";
// string s = "   -43";
// // string s = "-4193 with words";
// // string s = "words and 988";

// cout << myAtoi(s);




// // String compression(leetcode)
// vector<char> chars = {'a','a','b','b','c','c','c'};
// // vector<char> chars = {'a'};
// // vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

// cout << stringCompress(chars);



// zigzag conversion(leetcode)
// string s = "PAYPALISHIRING";
string s = "AB";
int numRows = 1;

cout << zigzagStringConversion(s,numRows);



    return 0;
}