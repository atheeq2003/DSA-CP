// 33. Search in Rotated Sorted Array -> https://leetcode.com/problems/search-in-rotated-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[start] <= arr[mid]) {
            if(arr[start] <= target && target <= arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if(arr[mid] <= target && target <= arr[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(arr, target) << endl;
}