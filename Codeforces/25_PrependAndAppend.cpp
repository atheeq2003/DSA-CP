// 800  - C
// 1791 - Prepend and Append (implementation, two pointers)
// https://codeforces.com/problemset/problem/1791/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        string s;
        cin >> s;
        int i=0, j=n-1;
        while(i<j && s[i] != s[j]) {
            i++;
            j--;
        }
        cout << j-i+1 << "\n";
    }
}