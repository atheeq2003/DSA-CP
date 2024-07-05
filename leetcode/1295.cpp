#include<bits/stdc++.h>
using namespace std;
int findNumbers(vector<int>& nums) {
    int count=0;   
    for(int i=0;i<nums.size();i++){
        string str; 
        str=to_string(nums[i]);
        if(str.size()%2==0) {
            count++;
        } 
    }
    return count;
}
int main() {
    vector<int> myVector ={12,345,2,6,7896};
    int output = findNumbers(myVector);
    cout << output;
}