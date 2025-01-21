// Second Largest and Smallest Element in an Array
#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach:
    Time Complexity: O(N), We do two linear traversals in our array
    Space Complexity: O(1)
*/
void secondLargeSmallBrute(vector<int> arr) {
    int max = INT_MIN;
    int min = INT_MAX;
    int secondMax = INT_MIN;
    int secondMin = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
        if(arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    cout << secondMax << endl;
    cout << secondMin << endl;
}

/*
Optimised Approach:
    Time Complexity: O(N), Single-pass solution
    Space Complexity: O(1)
*/
void secondLargeSmallOptimised(vector<int> arr) {
    int max = INT_MIN;
    int min = INT_MAX;
    int secondMax = INT_MIN;
    int secondMin = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        // 2, 3, 1, 9, 8
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }

        if(arr[i] < min) {
            secondMin = min;
            min = arr[i];
        }
        else if(arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    cout << secondMax << endl;
    cout << secondMin;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    secondLargeSmallBrute(arr);
    secondLargeSmallOptimised(arr);
}