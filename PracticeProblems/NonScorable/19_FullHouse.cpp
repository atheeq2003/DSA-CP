// https://atcoder.jp/contests/abc263/tasks/abc263_a
/* This problem can be solved by counting the frequencies of each element. And if we find the counts to be
   2 and 3 then we return Yes else No.*/
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> arr(14); // arr = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
  for(int i=0; i<5; i++) {
    int n;
    cin >> n;
    arr[n]++; // Ex: arr[4]++ We increment 4th index to 1 and so on. Every time we find 4.
  }
  bool cnt1=false, cnt2=false;
  for(int i=0; i<14; i++) { // Checking every element if the count is 2 and same for 3.
    if(arr[i] == 2) {
      cnt1 = true;
    }
    if(arr[i] == 3) {
      cnt2 = true;
    }
  }
  if(cnt1 == true && cnt2 == true) { // arr = [2,3,0,0,0,0,0,0,0,0,0,0,0,0,0] if we find the both the counts
    cout << "Yes" << "\n";           // return Yes else No
  }
  else {
    cout << "No" << "\n";
  }
}