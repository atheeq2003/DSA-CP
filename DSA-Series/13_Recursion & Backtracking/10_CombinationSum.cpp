// 39. Combination Sum -> https://leetcode.com/problems/combination-sum/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
set<vector<int>> s;
void getAllCombinations(vector<int> &arr, vector<int> &combinations, vector<vector<int>> &ans, int i, int target) {
    if(i == arr.size() || target < 0) {
        return;
    }
    if(target == 0) {
        if(s.find(combinations) == s.end()) {
            ans.push_back(combinations);
            s.insert(combinations);
        }
        return;
    }
    // Single Inclusion
    combinations.push_back(arr[i]);
    getAllCombinations(arr, combinations, ans, i+1, target-arr[i]);
    // Double Inclusion
    getAllCombinations(arr, combinations, ans, i, target-arr[i]);
    // Exclusion
    combinations.pop_back();
    getAllCombinations(arr, combinations, ans, i+1, target);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target) {
    vector<int> combinations;
    vector<vector<int>> ans;
    getAllCombinations(arr, combinations, ans, 0, target);
    return ans;
}

};


int main() {
    Solution s;
    vector<int> arr = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans;
    ans = s.combinationSum(arr, target);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}