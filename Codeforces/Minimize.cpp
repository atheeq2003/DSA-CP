// https://codeforces.com/contest/2009/problem/0
// Div 4
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		cout << abs(a-b) << "\n";
	}
}