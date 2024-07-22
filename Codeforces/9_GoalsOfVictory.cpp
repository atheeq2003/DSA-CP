// 800  - A
// 1877 - Goals of Victory (math)
// https://codeforces.com/problemset/problem/1878/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int sum=0;
        for(int i=0; i<n-1; i++) {
            int ef;
            cin >> ef;
            sum+=ef;
        }
        cout << -sum << "\n";
    }
}