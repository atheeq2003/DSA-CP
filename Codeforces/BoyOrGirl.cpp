// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    set<char> set;
    for (int i=0;i<s.size();i++) {
        set.insert(s[i]);
    }
    if (set.size()%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
