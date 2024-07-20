// 800  - A
// 1896 - Jagged Swaps (sortings)
// https://codeforces.com/problemset/problem/1896/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &i : arr) {
            cin >> i;
        }
        if(arr[0] == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}