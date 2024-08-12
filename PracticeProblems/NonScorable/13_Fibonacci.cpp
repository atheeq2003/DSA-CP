// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    long long nextEle=0, prevEle=1, ans=0;
    cin >> n;
    if (n == 1) 
        cout << 0;
    else if (n == 2) 
        cout << 1;
    else if(n>2) {
        for(int i=3; i<=n; i++) {
            ans = nextEle + prevEle;
            nextEle = prevEle;
            prevEle = ans;
        }
        cout << prevEle << endl;
    }
    
}