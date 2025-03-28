// 496. Next Greater Element I -> https://leetcode.com/problems/next-greater-element-i/
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> nums1, vector<int> nums2) {
    unordered_map<int, int> map;
    stack<int> s;
    vector<int> ans;
    for(int i = nums2.size()-1; i >= 0; i--) {
        while(s.size() > 0 && s.top() <= nums2[i]) {
            s.pop();
        }
        if(s.empty()) {
            map[nums2[i]] = -1;
        }
        else {
            map[nums2[i]] = s.top();
        }
        s.push(nums2[i]);
    }
    for(int i : nums1) {
        ans.push_back(map[i]);
    }
    return ans;
}

int main() {
    vector<int> nums1 = {2,4};
    vector<int> nums2 = {1,2,3,4};
    vector<int> ans = nextGreaterElement(nums1, nums2);
    for(int i : ans) {
        cout << i << " ";
    }
    cout << endl;
}