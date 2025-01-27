// 189. Rotate Array -> https://leetcode.com/problems/rotate-array/description/
#include<bits/stdc++.h>
using namespace std;

void rotateOptimal(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin()+(n-k));
    reverse(arr.begin()+(n-k), arr.end());
    reverse(arr.begin(), arr.end());
}

void rotateBrute(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n;
    vector<int> temp(k);
    for(int i = n-k; i < n; i++) {
        temp[i-(n-k)] = arr[i];
    }
    for(int i = n-k-1; i >= 0; i--) {
        arr[i+k] = arr[i];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> arr2 = {-1,-100,3,99};
    int k = 2;
    rotateBrute(arr, k);
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    rotateOptimal(arr2, k);
    for(int i : arr2) {
        cout << i << " ";
    }
    
}