// 131. Palindrome Partitioning -> https://leetcode.com/problems/palindrome-partitioning/description/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

void getAllPartitions(string s, vector<string> &partitions, vector<vector<string>> &ans) {
    if(s.size() == 0) {
        ans.push_back(partitions);
        return;
    }


    for(int i = 0; i < s.size(); i++) {
        string part = s.substr(0, i+1);
        if(isPalindrome(part)) {
            partitions.push_back(part);
            getAllPartitions(s.substr(i+1), partitions, ans);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<string> partitions;
    vector<vector<string>> ans;
    getAllPartitions(s, partitions, ans);
    return ans;
}

int main() {
    string s = "aab";
    vector<vector<string>> ans = partition(s);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}