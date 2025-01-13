// 704. Binary Search -> https://leetcode.com/problems/binary-search/description/
#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(logn) Space Complexity: O(logn)
int binSearchRecursive(vector<int> arr, int target, int start, int end) {
    if(start <= end) {
        int mid = start + (end-start)/2;
        if(target > arr[mid]) {
            return binSearchRecursive(arr, target, mid+1, end);
        }
        else if(target < arr[mid]) {
            return binSearchRecursive(arr, target, start, mid-1);
        }
        else {
            return mid;
        }
    }
    return -1;
}

// Time Complexity: O(logn) Space Complexity: O(1)
int binSearchIterative(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(target > arr[mid]) {
            start = mid+1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else if(target == arr[mid]) {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int start = 0;
    int end1 = arr1.size() - 1;
    int target1 = 12;
    cout << binSearchIterative(arr1, target1) << endl;
    cout << binSearchRecursive(arr1, target1, start, end1) << endl;
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int end2 = arr2.size() - 1;
    int target2 = 0;
    cout << binSearchIterative(arr2, target2) << endl;
    cout << binSearchRecursive(arr2, target2, start, end2) << endl;
}