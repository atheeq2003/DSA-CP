#include<bits/stdc++.h>
using namespace std;

void swappMaxMin(int arr[], int n) {
    int small = INT_MAX;
    int large = INT_MIN;
    int smallIndex = 0;
    int largeIndex = 0;
    for(int i = 0; i < n; i++) {
        small = min(arr[i], small);
        if(small == arr[i]) {
            smallIndex = i;
        }
        large = max(arr[i], large);
        if(large == arr[i]) {
            largeIndex = i;
        }
    }
    swap(arr[smallIndex], arr[largeIndex]);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    swappMaxMin(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}