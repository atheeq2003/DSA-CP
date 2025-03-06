// 46. Permutations -> https://leetcode.com/problems/permutations/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums, int idx, vector<vector<int>> &ans) {
    if(idx == nums.size()) {
        ans.push_back(nums);
        return ans;
    }

    for(int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        permute(nums, idx+1, ans);
        swap(nums[idx], nums[i]);
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3};
    int idx = 0;
    vector<vector<int>> ans;
    vector<vector<int>> permuteAns = permute(nums, idx, ans);
    for(int i = 0; i < permuteAns.size(); i++) {
        for(int j = 0; j < permuteAns[i].size(); j++) {
            cout << permuteAns[i][j] << " ";
        }
        cout << endl;
    }
}