// https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int y;
  cin >> y;
  for(int i=y+1; i<10000; i++) {
      string s=to_string(i);
        vector<int> arr(10);
        int oneCount=0;
    for(int j=0; j<4; j++) {
        int val=s[j]-'0'; 
          arr[val]++;
    }
    for(int j=0; j<10; j++) {
      if(arr[j] == 1) {
        oneCount++;
      }
    }
    if(oneCount == 4) {
        cout<<s<<endl;
        break;
    }
  }
}