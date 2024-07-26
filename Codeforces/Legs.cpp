// A - Div2 Contest 26/07/2024
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans=n/4;
        if(n % 4 == 0) {
            cout << ans << "\n";
        }
        else {
            cout << ans+1 << "\n";
        }
    }
}