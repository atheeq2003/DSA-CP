// 49. Group Anagrams -> https://leetcode.com/problems/group-anagrams/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagramsBrute(vector<string> &strs) {
    unordered_map<string, vector<string>> map;
    for(auto i : strs) {
        string word = i;
        sort(word.begin(), word.end());
        map[word].push_back(i);
    }
    vector<vector<string>> ans;
    for(auto i : map) {
        ans.push_back(i.second);
    }
    return ans;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagramsBrute(strs);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
    }
}