// 704. Binary Search -> https://leetcode.com/problems/binary-search/description/
#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int target, int start, int end){
    if(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(target >= arr[mid]) {
            return recursiveBinarySearch(arr, target, mid+1, end);
        }
        else {
            return recursiveBinarySearch(arr, target, start, mid-1);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {-1, 0, 1, 3, 4, 6, 8};
    int target = 40;
    int start = 0, end = arr.size()-1;
    cout << recursiveBinarySearch(arr, target, start, end) << endl;
}