#include<bits/stdc++.h>
using namespace std;

// TC: O(nlogn) -> For Average/Practical Case 
// TC: O(n^2) -> For Worst Case => Because if array is sorted partitions will [n-1 + n-2 +...+] Which is n*(n+1)/2 => O(n^2). 
// SC: O(1) -> No extra space used (Better than merge sort)

int partition(vector<int> &arr, int start, int end) {
    int idx = start-1;
    int pivot = arr[end];
    for(int j = start; j < end; j++) {
        if(arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int pivotIdx = partition(arr, start, end);
        // Left
        quickSort(arr, start, pivotIdx-1);
        // Right
        quickSort(arr, pivotIdx+1, end);
    }
}

int main() {
    vector<int> arr = {5,1,1,2,0,0};
    quickSort(arr, 0, arr.size()-1);
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}