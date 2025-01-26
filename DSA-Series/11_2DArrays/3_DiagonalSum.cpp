#include<bits/stdc++.h>
using namespace std;

int diagonalSumOptimal(vector<vector<int>> &arr) {
    int diagSum = 0;
    for(int i = 0; i < arr.size(); i++) {
        diagSum += arr[i][i];
        int a = arr.size()-i-1;
        if(i != a) {
            diagSum += arr[i][a];
        }
    }
    return diagSum;
}

int diagonalSum(vector<vector<int>> &arr) {
    int diagSum = 0;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            int a = arr.size()-i-1;
            if(i == j) {
                diagSum += arr[i][j];
            }
            else if(j == a) {
                diagSum += arr[i][j];
            }
        }
    }
    return diagSum;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum(arr) << endl;
    cout << diagonalSumOptimal(arr) << endl;
}