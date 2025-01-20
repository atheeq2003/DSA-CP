#include<bits/stdc++.h>
using namespace std;

int subArraySum(vector<int> arr) {
    int n = arr.size();
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        int start = max(0, i - arr[i]);
        for(int j = start; j <= i; j++) {
            totalSum += arr[j];
        }
    }
    return totalSum;
}

int main() {
    vector<int> arr = {3,1,1,2};
    cout << subArraySum(arr) << endl;
}