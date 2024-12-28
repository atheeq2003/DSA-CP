#include<bits/stdc++.h>
using namespace std;

int maxValue(int arr[], int n) {
    int large = INT_MIN;
    for(int i = 0; i < n; i++) {
        large = max(arr[i], large);
    }
    return large;
}

void distinctValues(int arr[], int arr2[], int n) {
    for(int i = 0; i < n; i++) {
        arr2[arr[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(arr2[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void uniqueValues(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isDistinct = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {9, 4, 4, 4, 4, 9, 6, 9, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = maxValue(arr, n);
    int arr2[maxVal + 1] = { 0 };
    distinctValues(arr, arr2, n);
    uniqueValues(arr, n);
}