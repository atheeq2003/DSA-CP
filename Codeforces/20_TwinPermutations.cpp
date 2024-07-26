// 800  - A
// 1831 - Twin Permutations (constructive algorithms)
// https://codeforces.com/problemset/problem/1831/A
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
        for(int i=0; i<n; i++) {
            cout << n - arr[i] + 1 << " ";
        }
        cout << "\n";
    }
}