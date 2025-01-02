// Single Number -> Find Unique Element
// 136. Single Number -> https://leetcode.com/problems/single-number/description/
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> arr) {
    int ans = 0;
    for(int i : arr) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    vector<int> arr = {9, 4, 4, 4, 4, 9, 9, 9, 1};
    cout << singleNumber(arr) << endl;
}