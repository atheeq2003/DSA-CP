// 1929 - Concatenation of Array
// Easy - Array, Simulation
// https://leetcode.com/problems/concatenation-of-array/description/
#include<bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(2*n);
    for(int i=0;i<n;i++) {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    return ans;
}
int main() {
    vector<int> myVector = {1,2,1};
    vector<int> output = getConcatenation(myVector);
    for(int i=0;i<output.size();i++) {
        cout << output[i] << " ";
    }
}