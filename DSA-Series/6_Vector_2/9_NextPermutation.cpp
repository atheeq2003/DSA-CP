#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr) {
    int pivot = -1;
    int n = arr.size();
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] < arr[i+1]) {
            pivot = i;
            break;
        }
    }

    if(pivot == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i = n-1; i > pivot; i--) {
        if(arr[i] > arr[pivot]) {
            swap(arr[pivot], arr[i]);
            break;
        }
    }

    int start = pivot+1;
    int end = n-1;
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1,3,2};
    nextPermutation(arr);
    for(int i : arr) {
        cout << i << " ";
    }
}