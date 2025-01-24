// 14. Longest Common Prefix -> https://leetcode.com/problems/longest-common-prefix/description/
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefixOptimal(vector<string> strs) {
    for(int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];
        for(int j = 1; j < strs.size(); j++) {
            if(i >= strs[j].length() || c != strs[j][i]) {
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}

string longestCommonPrefixBrute(vector<string> strs) {
    sort(strs.begin(), strs.end());
    for(string str : strs) {
        cout << str << " ";
    }
    cout << endl;
    string first = strs[0];
    string last = strs[strs.size() - 1];
    int i = 0;
    for(i = 0; i < first.size() && i < last.size(); i++) {
        if(first[i] != last[i]) {
            break;
        }
    }
    return first.substr(0,i);
}

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefixBrute(strs) << endl;
    cout << longestCommonPrefixOptimal(strs) << endl;
}