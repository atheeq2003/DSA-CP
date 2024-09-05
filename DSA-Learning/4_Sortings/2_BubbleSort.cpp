#include<bits/stdc++.h>
using namespace std;
vector<int> bubble_sort(vector<int> arr, int n) {
    bool swapped = false;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) { // 54321
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) {
        cin >> i;
    }
    arr = bubble_sort(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}