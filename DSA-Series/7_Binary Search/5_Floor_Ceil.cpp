#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> arr, int k) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end) {
        int mid = start + (end - start)/2;
        if(arr[mid] <= k) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int ceil(vector<int> arr, int k) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] >= k) {
            ans = mid;
            end = mid - 1;
        }
        else {
           start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3,4,4,7,8,10};
    int k1 = 5;
    int k2 = 8;
    cout << floor(arr, k1) << endl;
    cout << ceil(arr, k1) << endl;
    cout << floor(arr, k2) << endl;
    cout << ceil(arr, k2) << endl;
}