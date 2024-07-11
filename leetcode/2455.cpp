// 2455 - Average Value of Even Numbers That Are Divisible by Three
// Easy - Array, Math
// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/
#include<bits/stdc++.h>
using namespace std;
int averageValue(vector <int>& nums) {
    int divisibles=0;
    int count=0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]%2==0 && nums[i]%3==0) {
            divisibles+=nums[i];
            count++;
        }
    }
    if(count==0)
        return count;
    return divisibles/count;
}
int main() {
    vector<int> myVector = {4,4,9,10};
    int output = averageValue(myVector);
    cout << output << endl;
}