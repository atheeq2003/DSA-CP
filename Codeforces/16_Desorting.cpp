#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &i : arr) {
            cin >> i;
        }
        if(!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << "\n";
        }
        int diff = INT_MAX;
        for(int i=1; i<n; i++) {
            diff = min(diff, arr[i] - arr[i-1]);
        }
        int ops = diff/2 + 1;
        cout << ops << "\n";
    }
}