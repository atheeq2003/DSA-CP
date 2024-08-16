// https://codeforces.com/contest/1615/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
		    int x; 
            cin >> x;
		    sum += x;
	    }
	    if (sum % n == 0) {
		    cout << 0 << endl;
	    }
	    else
		    cout << 1 << endl;
    }
}