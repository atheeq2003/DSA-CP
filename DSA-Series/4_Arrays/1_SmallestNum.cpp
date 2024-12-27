#include<bits/stdc++.h>
using namespace std;
int smallInt(int arr[], int n) {
    int small = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < small) {
            small = arr[i];
        }
    }
    return small;
}
int main() {
    int small = INT_MAX;
    int arr[] = {5, 15, 22, 1, -15, 24};
    int n = sizeof(arr) - sizeof(arr[0]);
    cout << smallInt(arr, n) << endl;
    for(int i = 0; i < n; i++) {
        small = min(arr[i], small);
    }
    cout << small << endl;
}