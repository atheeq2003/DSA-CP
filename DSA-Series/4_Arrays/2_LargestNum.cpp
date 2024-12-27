#include<bits/stdc++.h>
using namespace std;

int largeNum(int arr[], int n) {
    int large = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}

int main() {
    int large = INT_MIN;
    int arr[] = {10, -15, 35, 0, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr) << " " << sizeof(arr[0]) << endl;
    cout << largeNum(arr, n) << endl;
    int index = 0;
    for(int i = 0; i < n; i++) {
        large = max(arr[i], large);
        if(large == arr[i]) {
            index = i;
        }
    }
    cout << "Largest Num: " << large << endl;
    cout << "Index of Largest Num: " << index << endl;
}