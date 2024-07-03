// 1450 - Number of Students Doing Homework at a Given Time
// Easy - Array
// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/description/
#include<bits/stdc++.h>
using namespace std;
int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans = 0;
        for (int i = 0; i < startTime.size(); i++)
            if (startTime[i] <= queryTime && endTime[i] >= queryTime)
                ans++;
        return ans;
    }
int main() {
    vector<int> startTime = {4};
    vector<int> endTime = {4};
    int output = busyStudent(startTime,endTime,4);
    cout << output;
}