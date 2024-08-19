// https://atcoder.jp/contests/abc305/tasks/abc305_a
// We can find the diff between 2 near stations and compare them and print nearest station which has low difference
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); 
  int N;
  cin >> N;
  int lowNear, highNear;
  if(N % 5 == 0) {
    cout << N << "\n";
  }
  else {
    lowNear = N % 5; // To find the value(Water Station) which is behind the runner
    highNear = 5 - lowNear; // to find the value(Water Station) which is forward to the runner
    if(lowNear < highNear) { 
      cout << N-lowNear << "\n";
    }
    else {
      cout << N+highNear << "\n";
    }
  }
}