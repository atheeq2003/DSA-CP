// 800  - A
// 1866 - Ambitious Kid (math)
// https://codeforces.com/problemset/problem/1866/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ops=1e9;
    vector<int> arr(n);
    for(auto &i : arr) {
        cin >> i;
    }
    for(int i=0; i<n; i++) {
        ops = min(ops, abs(arr[i]-0));
    }
    
    cout << ops << "\n";
}