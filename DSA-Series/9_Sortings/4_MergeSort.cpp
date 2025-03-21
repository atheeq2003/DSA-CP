#include<bits/stdc++.h>
using namespace std;
// TC: O(logn*n) => logn[Total Calls] * n[Work Done in each call] Therefore: O(nlogn) [n/2^k -> n = 2^k]
// SC: O(n)
void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start;
    int j = mid+1;
    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx+start] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int mid = start + (end-start)/2;
        // Left
        mergeSort(arr, start, mid);
        // Right
        mergeSort(arr, mid+1, end);
        // Merge
        merge(arr, start, mid, end);
    }
}

int main() {
    vector<int> arr = {5,2,3,1};
    mergeSort(arr, 0, arr.size()-1);
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}