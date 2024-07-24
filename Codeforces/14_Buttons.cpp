// 800  - A
// 1858 - Buttons (games, greedy, math)
// https://codeforces.com/problemset/problem/1858/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(c%2 == 0) {
            if(a > b)
                cout << "First" << "\n";
            else
                cout << "Second" << "\n";
        }
        else {
            if(b > a)
                cout << "Second" << "\n";
            else
                cout << "First" << "\n";
        }
    }
}