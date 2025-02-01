// Q1. Find Valid Pair of Adjacent Digits in String -> https://leetcode.com/contest/biweekly-contest-149/problems/find-valid-pair-of-adjacent-digits-in-string/description/
#include<bits/stdc++.h>
using namespace std;
string findValidPair(string s) {
    unordered_map<char, int> map;
    for(char i : s) {
        map[i]++;
    }
    for(auto i : map) {
        cout << i.first << " " << i.second << endl;
    }
    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        char first = s[i];
        char second = s[i+1];
        if(first != second) {
            if(map[first] == (first - '0') && map[second] == (second - '0')) {
                ans.push_back(first);
                ans.push_back(second);
                return ans;
            }
        } 
    }
    return "";
}

int main() {
    string s = "2523533";
    cout << findValidPair(s) << endl;
}