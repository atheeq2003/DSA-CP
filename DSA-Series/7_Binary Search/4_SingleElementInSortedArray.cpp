// 540. Single Element in a Sorted Array -> https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> arr) {
    int n = arr.size();
    if(n == 1) return arr[0];
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        int mid = start + (end-start)/2;
        if(mid == 0 && arr[mid] != arr[mid+1]) return arr[mid];
        if(mid == n-1 && arr[mid] != arr[mid-1]) return arr[mid];
        
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

        if(mid % 2 == 0) {
            if(arr[mid] == arr[mid-1]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if(arr[mid] == arr[mid-1]) {
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
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << singleNonDuplicate(arr) << endl;
}