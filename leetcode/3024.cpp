// 3024 - Type of Triangle
// Easy - Array, Math, Sorting
// https://leetcode.com/problems/type-of-triangle/description/
#include<bits/stdc++.h>
using namespace std;
string triangleType(vector<int>& nums) {
    if(!((nums[0]+nums[1]>nums[2]) && (nums[0]+nums[2]>nums[1]) && (nums[1]+nums[2]>nums[0])))
        return "none";
    if(nums[0] == nums[1] && nums[1] == nums[2])
        return "equilateral";
    else if(nums[0] != nums[1] && nums[0] != nums[2] && nums[1] != nums[2])
        return "scalene";
    return "isosceles";
}
int main() {
    vector<int> myVector={3,4,5};
    string output = triangleType(myVector);
    cout << output << endl;
}