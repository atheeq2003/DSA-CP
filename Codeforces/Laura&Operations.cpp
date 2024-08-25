// https://codeforces.com/contest/1900/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> arr;
        if(b % 2 == c % 2) {
            arr.push_back(1);
        }
        else {
            arr.push_back(0);
        }
        if(a % 2 == c % 2) {
            arr.push_back(1);
        }
        else {
            arr.push_back(0);
        }
        if(a % 2 == b % 2) {
            arr.push_back(1);
        }
        else {
            arr.push_back(0);
        }
        for(auto i : arr) {
            cout << i << " ";
        }
        cout << "\n";
    }
}