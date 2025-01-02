#include<bits/stdc++.h>
using namespace std;

void reverseNum(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    reverseNum(arr);
    for(int val : arr) {
        cout << val << " ";
    }
}