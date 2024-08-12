// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=2; i<n; i++) {
		if(n%i!=0) {
			continue;
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << "\n";
}