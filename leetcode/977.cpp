#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
        vector<int> newArr;
        for(int i=0;i<nums.size();i++)
        {
            int sqr=0;
            sqr=nums[i]*nums[i];
            newArr.push_back(sqr);
        }
        sort(newArr.begin(), newArr.end());
        return newArr;
    }
int main() {
    vector<int> myVector ={-7,-3,2,3,11};
    vector<int> output = sortedSquares(myVector);
    for(int i=0;i<output.size();i++)
    {
        cout << output[i] << " ";
    }
}