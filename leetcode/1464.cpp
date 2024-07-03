// 1464 - Maximum Product of Two Elements in an Array
// Easy - Array, Sorting, Heap (Priority Queue)
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i=0; i<nums.size(); i++) {
        int num = nums[i];
        if (num >= max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }
    return (max1 - 1) * (max2 - 1);
}
int main() {
    vector<int> myVector ={3,4,5,2};
    int output = maxProduct(myVector);
    cout << "result: " << output;
}