// 75. Sort Colors -> https://leetcode.com/problems/sort-colors/description/
#include<bits/stdc++.h>
using namespace std;

void sortColorsOptimal(vector<int> &arr) {
    int n = arr.size();
    int mid = 0, high = n-1, low = 0;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    } 
}

void sortColorsBrute(vector<int> &arr) {
    int countZeros = 0;
    int countOnes = 0;
    int countTwos = 0;
    for(int i : arr) {
        if(i == 0) {
            countZeros++;
        }
        else if(i == 1) {
            countOnes++;
        }
        else {
            countTwos++;
        }
    }
    int idx = 0;
    for(int i = 0; i < countZeros; i++) {
        arr[idx] = 0;
        idx++;
    }
    for(int i = 0; i < countOnes; i++) {
        arr[idx] = 1;
        idx++;
    }
    for(int i = 0; i < countTwos; i++) {
        arr[idx] = 2;
        idx++;
    }
    
}

int main() {
    vector<int> arr = {2,0,2,1,1,0};
    sortColorsBrute(arr);
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    sortColorsOptimal(arr);
    for(int i : arr) {
        cout << i << " ";
    }
}