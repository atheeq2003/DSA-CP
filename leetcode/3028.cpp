// 3028 - Ant on the Boundary
// Easy - Array, Simulation, Prefix Sum
// https://leetcode.com/problems/ant-on-the-boundary/description/
#include<bits/stdc++.h>
using namespace std;
int returnToBoundaryCount(vector<int>& nums) {
    int antPos=0;
    int count=0;
    for(int i=0;i<nums.size();i++) {
        antPos += nums[i];
        if(antPos==0) {
            count++;
        }   
    }
    return count;
}
int main() {
    vector<int> myVector ={2,3,-5,5,-5};
    int output = returnToBoundaryCount(myVector);
    cout << "result: " << output;
}