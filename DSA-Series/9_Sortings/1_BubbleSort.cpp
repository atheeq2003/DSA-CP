#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n-1; i++) {
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                /*  int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;   
                */
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &i : arr) {
        cin >> i;
    }
    bubbleSort(arr);
    for(auto i : arr) {
        cout << i << " ";
    }
}