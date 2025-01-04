#include<bits/stdc++.h>
using namespace std;

int usingKadane(vector<int> arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i : arr) {
        currentSum += i;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int maxSubArrBrute(vector<int> arr) {
    int maxSum = INT_MIN;
    for(int start = 0; start < arr.size(); start++) {
        int currentSum = 0;
        for(int end = start; end < arr.size(); end++) {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {2, -1, -3, 4, 5};
    cout << "Max Sub Array Sum using Brute: " << maxSubArrBrute(arr) << endl;
    cout << "Max Sub Array Sum using Kadane's Algo: " << usingKadane(arr);
}