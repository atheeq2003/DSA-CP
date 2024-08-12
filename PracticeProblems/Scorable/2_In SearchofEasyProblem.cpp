// https://codeforces.com/contest/1030/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count=0;
	int opinion;
	for(int i=0; i<n; i++) {
		cin >> opinion;
		if(opinion==1) {
			count++;
		}
	}
	if(count>0) {
		cout << "HARD" << "\n";
	}
	else {
		cout << "EASY" << "\n";
	}
	
}