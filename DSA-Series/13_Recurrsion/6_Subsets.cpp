// 78. Subsets -> https://leetcode.com/problems/subsets/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allSubsets(vector<int> &arr, vector<int> &ans, vector<vector<int>> &subsets, int i) {
    if(i == arr.size()) {
        subsets.push_back(ans);
        return subsets;
    }

    // include
    ans.push_back(arr[i]);
    allSubsets(arr, ans, subsets, i+1);

    ans.pop_back();
    // exclude
    allSubsets(arr, ans, subsets, i+1);

    return subsets;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subsets;
    vector<int> ans;
    vector<vector<int>> printSubsets = allSubsets(arr, ans, subsets, 0);
    for(int i = 0; i < printSubsets.size(); i++) {
        for(int j = 0; j < printSubsets[i].size(); j++) {
            cout << printSubsets[i][j] << " ";
        }
        cout << endl;
    }
}