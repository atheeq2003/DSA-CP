// 800  - A
// 1881 - Don't Try to Count (brute force, strings)
// https://codeforces.com/problemset/problem/1881/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        bool found = false;
        for(int ops=0; ops<=5; ops++) {
            if(x.find(s) != -1) {
                cout << ops << endl;
                found = true;
                break;
            }
            x.append(x);
        }
        if(!found) 
            cout << -1 << endl;
    }
}