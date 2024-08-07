// https://codeforces.com/contest/1993/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countA=0;
        int countB=0;
        int countC=0;
        int countD=0;
        int questionMarks=0;
        for(int i=0; i<4*n; i++) {
            if(s[i] == 'A' && countA < n) {
                countA++;
            }
            else if(s[i] == 'B' && countB < n) {
                countB++;
            }
            else if(s[i] == 'C' && countC < n) {
                countC++;
            }
            else if(s[i] == 'D' && countD < n) {
                countD++;
            }
            else if(s[i] == '?') {
                questionMarks++;
            }
        }
        cout << countA+countB+countC+countD << endl;
    }
}