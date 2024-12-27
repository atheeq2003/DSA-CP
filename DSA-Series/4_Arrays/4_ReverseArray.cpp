// Reverse the array using two pointer approach 
#include<bits/stdc++.h>
using namespace std;
void revArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    revArray(arr, n);
    cout << "Reversed Array: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}