// 800  - A
// 1814 - Blank Space (implementation, math)
// https://codeforces.com/problemset/problem/1814/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,k;
        cin >> n >> k;
        if(n % 2 == 0) {
            cout << "YES" << "\n";
        }
        else {
            if(k % 2 != 0) {
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
            }
        }
    }
}