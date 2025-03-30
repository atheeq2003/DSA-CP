// 503. Next Greater Element II -> https://leetcode.com/problems/next-greater-element-ii/description/
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> s;
    for(int i = 2*n-1; i >= 0; i--) {
        while(s.size() > 0 && nums[s.top()] <= nums[i%n]) {
            s.pop();
        }
        if(s.empty()) {
            ans[i%n] = -1;
        }
        else {
            ans[i%n] = nums[s.top()];
        }
        s.push(i%n);
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4,3};
    vector<int> ans = nextGreaterElements(nums);
    for(int i : ans) {
        cout << i << " ";
    }
    cout << endl;
}