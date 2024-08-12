// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	int nums;
	int EvenCnt=0;
	int OddCnt=0;
	int PosCnt=0;
	int NegCnt=0;
	for(int i=0; i<N; i++) {
		cin >> nums;
		if(nums < 0) {
			NegCnt++;
		}
		else if(nums > 0) {
			PosCnt++;
		}
		if(abs(nums) % 2 == 0) {
			EvenCnt++;
		}
		else {
			OddCnt++;
		}
	}
	cout << "Even: " << EvenCnt << "\n";
	cout << "Odd: " << OddCnt << "\n";
	cout << "Positive: " << PosCnt << "\n";
	cout << "Negative: " << NegCnt << "\n";
	
}