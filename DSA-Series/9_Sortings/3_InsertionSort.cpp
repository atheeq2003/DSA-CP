#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
    for(int i = 1; i < arr.size(); i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; 
    }
}

int main() {
    vector<int> arr = {1, 3, 5, 6, 2, 4};
    insertionSort(arr);
    for(int i : arr) {
        cout << i << " ";
    }
}