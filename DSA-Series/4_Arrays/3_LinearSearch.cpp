#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int target = 10;
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of Target Num: " << linearSearch(arr, size, target) << endl;
}