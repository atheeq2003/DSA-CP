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
    for(int i=0; i<n; i++) {
        if(find(B.begin(), B.end(), A[i]) != B.end())
            continue;
        else
            cout << "no" << "\n";
            return 0;
    }
    cout << "yes" << "\n";  
}