// 800  - A
// 1890 - Doremy's Paint 3 (constructive algorithms)
// https://codeforces.com/problemset/problem/1890/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i=0; i<n; i++) {
            int a;
            cin >> a;
            mp[a]++;
        }
        if(mp.size()>2||mp.size()==2&&abs(mp.begin()->second-mp.rbegin()->second)>1)
			cout<<"No\n";
		else 
            cout<<"Yes\n";
    }
}