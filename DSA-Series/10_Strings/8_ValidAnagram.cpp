#include<bits/stdc++.h>
using namespace std;

// TC: O(n) SC: O(1) -> because of known length of lowercase alphabets 26.
bool isAnagramOptimal(string s, string t) {
    vector<int> freq(26);
    if(s.length() != t.length()) {
        return false;
    }
    for(char ch : s) {
        freq[ch - 'a']++;
    }
    for(char ch : t) {
        freq[ch - 'a']--;
    }
    for(int digit : freq) {
        if(digit < 0) {
            return false;
        }
    }
    return true;
}

// TC: O(n) SC: O(K) -> k represents no of unique elements in string
bool isAnagramHash(string s, string t) {
    if(s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> map;
    for(int i = 0; i < s.length(); i++) {
        map[s[i]]++;
        map[t[i]]--;
    }
    for(auto digit : map) {
        if(digit.second < 0) {  
            return false;
        }
    }
    return true;
}

// TC: O(nlogn) SC: O(1)
bool isAnagramBrute(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << s << endl;
    cout << t << endl;
    if(s == t) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagramBrute(s, t) << endl;
    cout << isAnagramHash(s, t) << endl;
    cout << isAnagramOptimal(s, t) << endl;
}