// 800  - B
// 1862 - Sequence Game (constructive algorithms)
// https://codeforces.com/problemset/problem/1862/B
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
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1; i<n; i++) {
            if(arr[i] >= arr[i-1]) {
                ans.push_back(arr[i]);
            }
            else {
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        cout << ans.size() << "\n";
        for(auto x : ans) {
            cout << x << " ";
        }
    }
}