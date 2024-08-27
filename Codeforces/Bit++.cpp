// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x=0;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        if(s == "++X") {
            ++x;
        }
        else if(s == "X++") {
            x++;
        }
        else if(s == "--X") {
            --x;
        }
        else {
            x--;
        }
    }
    cout << x << "\n";
} 