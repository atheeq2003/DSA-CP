// 800  - A
// 1857 - Array Coloring (greedy, math)
// https://codeforces.com/problemset/problem/1857/A
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
        int sum=0;
        for(auto x : arr) {
            sum+=x;
        }
        if(sum%2 == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}