#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int prod(int arr[], int n) {
    int prod = 1;
    for(int i = 0; i < n; i++) {
        prod *= arr[i];
    }
    return prod;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr, n) << endl;
    cout << prod(arr, n) << endl;
}