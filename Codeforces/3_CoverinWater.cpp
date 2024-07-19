// 800  - A
// 1900 - Cover In Water (constructive algorithms, greedy, implementation, strings)
// https://codeforces.com/problemset/problem/1900/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.find("...")!=-1) {
            cout<< 2 <<endl;
        } 
        else {
            cout << count(s.begin(),s.end(),'.') << endl;
        }
    }
    return 0;
}