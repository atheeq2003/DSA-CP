// 2798 - Number of Employees Who Met the Target
// Easy - Array
// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/
#include<bits/stdc++.h>
using namespace std;
int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    vector<int> arr=hours;
    int count=0;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>=target)
            count++;
    }
    return count; 
}
int main() {
    vector<int> myVector = {0,1,2,3,4};
    int output = numberOfEmployeesWhoMetTarget(myVector, 2);
    cout << output << endl;
}