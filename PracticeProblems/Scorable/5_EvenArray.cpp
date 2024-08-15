// https://codeforces.com/problemset/problem/1367/B
/*
 We first count all the even and odd - indices and elements and check if they match. If one of the elements
 is more than the indices it means Ex: there are 3 even elements but only 2 even indices in that case we 
 return -1.
 And for every non matching pair {e,o}, {o,e}, {e,o}, {o,e} 0 and 1 or 1 and 0 we increment NM++; 
 Every swap takes 1 move. So the no of NM pairs is divided by 2.
 Ex: 4 NM pairs = 4/2 = 2 swaps to change them to {e,e}, {o,o}, {e,e}, {o,o} 
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int evenInd=0, evenEle=0, oddInd=0, oddEle=0;
        int nonMatchPairs=0;
        vector<int> arr(n);
        for(int i=0; i<arr.size(); i++) {
            cin >> arr[i];
            if(i % 2==0) {
                evenInd++;
            }
            else {
                oddInd++;
            }
            if(arr[i] % 2 == 0) {
                evenEle++;
            }
            else {
                oddEle++;
            }
            if(i % 2 != arr[i] % 2) {
                nonMatchPairs++;
            } 
        }
        if(evenInd != evenEle || oddInd != oddEle) {
            cout << -1 << "\n";
            continue;
        }
        cout << nonMatchPairs/2 << "\n";
    }
}