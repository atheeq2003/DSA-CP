#include<bits/stdc++.h>
using namespace std;

void mergeTwoArrays(vector<int> &A, int m, vector<int> &B, int n) {
    int i = m - 1;
    int j = n - 1;
    int idx = m + n - 1;
    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx] = A[i];
            idx--;
            i--; 
        }
        else {
            A[idx] = B[j];
            idx--;
            j--;
        }
    }

    while(j >= 0) {
        A[idx] = B[j];
        idx--;
        j--;
    }
}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> arr2 = {4, 5, 6};
    int n = 3;
    mergeTwoArrays(arr1, m, arr2, n);
    for(int i : arr1) {
        cout << i << " ";
    }
}