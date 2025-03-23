#include<bits/stdc++.h>
using namespace std;
// TC: O(n) SC: O(n)
bool isArraySorted(vector<int> arr, int n) {
    if(n == 0 || n == 1) {
        return true;
    }
    return arr[n-2] <= arr[n-1] && isArraySorted(arr, n-1); 
}

int main() {
    vector<int> arr = {1, 2, 4, 3, 5};
    int n = arr.size();
    cout << isArraySorted(arr, n) << endl; 
}