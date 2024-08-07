// https://codeforces.com/contest/1999/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,s,m;
        cin >> n >> s >> m;
        int prevEnd=0, freeTime=false; 
        for(int i=0; i<n; i++) {
            int l, r;
            cin >> l >> r;
            if(l-prevEnd >= s) {
                freeTime=true;
            }
            prevEnd = r;
        }
        if(m-prevEnd>=s) {
            freeTime=true;
        }
        if(freeTime) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}