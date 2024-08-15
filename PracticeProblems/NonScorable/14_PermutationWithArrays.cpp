// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<int> A(n);
    for(auto &i : A) {
        cin >> i;
    }
    vector<int> B(n);
    for(auto &j : B) {
        cin >> j;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(int i=0; i<n; i++) {
        if(A[i] == B[i]) {
            continue;
        }
        else {
            cout << "no" << "\n";
            return 0;
        }
    }    
    cout << "yes" << "\n";
}