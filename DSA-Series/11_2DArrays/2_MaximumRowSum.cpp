// 1672. Richest Customer Wealth -> https://leetcode.com/problems/richest-customer-wealth/description/
#include<bits/stdc++.h>
using namespace std;

int maxColSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN;
    for(int c = 0; c < arr[0].size(); c++) {
        int sumCol = 0;
        for(int r = 0; r < arr.size(); r++) {
            sumCol += arr[r][c];
        }
        maxSum = max(maxSum, sumCol);
    }
    return maxSum;
}

int maxRowSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN;
    for(int r = 0; r < arr.size(); r++) {
        int sumRow = 0;
        for(int c = 0; c < arr[r].size(); c++) {
            sumRow += arr[r][c];
        }
        maxSum = max(maxSum, sumRow);
    }
    return maxSum;
}

int main() {
    vector<vector<int>> arr = {{0, 0, 1}, {4, 5, 6}, {0, 8, 2}};
    cout << maxRowSum(arr) << endl;
    cout << maxColSum(arr) << endl;
}