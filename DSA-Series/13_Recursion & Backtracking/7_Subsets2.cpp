// 90. Subsets II -> https://leetcode.com/problems/subsets-ii/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getAllSubsetsWithDup(vector<int> &arr, vector<int> &ans, vector<vector<int>> &allSubsets, int i) {
    sort(arr.begin(), arr.end());
    if(i == arr.size()) {
        allSubsets.push_back(ans);
        return allSubsets;
    }

    ans.push_back(arr[i]);
    getAllSubsetsWithDup(arr, ans, allSubsets, i+1);
    ans.pop_back();
    int idx = i+1;
    while(idx < arr.size() && arr[idx-1] == arr[idx]) {
        idx++;
    }
    getAllSubsetsWithDup(arr, ans, allSubsets, idx);
    return allSubsets;
}

int main() {
    vector<int> arr = {1, 2, 2};
    vector<int> ans;
    int i = 0;
    vector<vector<int>> allSubsets;
    vector<vector<int>> printSubsets = getAllSubsetsWithDup(arr, ans, allSubsets, i);
    for(int i = 0; i < printSubsets.size(); i++) {
        for(int j = 0; j < printSubsets[i].size(); j++) {
            cout << printSubsets[i][j] << " ";
        }
        cout << endl;
    }
}