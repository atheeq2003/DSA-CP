// https://codeforces.com/contest/1999/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a1, a2, b1, b2;
        int ans=0;
        cin >> a1 >> a2 >> b1 >> b2;
        if((a1>=b1 && a2>b2) || (a1>b1 && a2>=b2)) {
            ans+=2; 
        }
        if((a1>=b2 && a2>b1) || (a1>b2 && a2>=b1)) {
            ans+=2;
        }
        cout << ans << "\n"; 
    }
}