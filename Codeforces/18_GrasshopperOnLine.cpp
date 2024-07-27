// 800  - A
// 1837 - Grasshopper on a Line (constructive algorithms, math)
// https://codeforces.com/problemset/problem/1837/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x,k;
        cin >> x >> k;
        if(x % k != 0) {
            cout << 1 << "\n";
            cout << x << "\n";
        }
        else {
            cout << 2 << "\n";
            cout << x-1 << " " << 1 << "\n";
        }
    }
}