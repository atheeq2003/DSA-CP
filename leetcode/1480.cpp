// 1480 - Running Sum of 1D Array
// Easy - Array, Prefix Sum
// https://leetcode.com/problems/running-sum-of-1d-array/description/
#include<bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    vector<int> rsarr(nums.size());
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];
        rsarr[i]=sum;
    }
    return rsarr;
}
int main()
{
    // TEST 1
    vector<int> myVector = {1, 2, 3, 4};
    vector<int> output = runningSum(myVector);
    // Print the elements of the vector
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    // TEST 2
    myVector = {1,1,1,1,1};
    output = runningSum(myVector);
    // Print the elements of the vector
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    // TEST 2
    myVector = {3,1,2,10,1};
    output = runningSum(myVector);
    // Print the elements of the vector
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

}