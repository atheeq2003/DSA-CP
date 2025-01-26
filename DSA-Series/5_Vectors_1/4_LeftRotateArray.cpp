#include<bits/stdc++.h>
using namespace std;

void rotateOptimal(vector<int> &arr, int k) {
    int n = arr.size();
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());
}

void rotateBrute(vector<int> &arr, int &k) {
    k = k % arr.size();
    vector<int> temp(k);
    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for(int i = k; i < arr.size(); i++) {
        arr[i-k] = arr[i];
    }
    for(int i = arr.size() - k; i < arr.size(); i++) {
        arr[i] = temp[i-(arr.size()-k)];
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> arr2 = {1,2,3,4,5,6,7,8};
    int k = 3;
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