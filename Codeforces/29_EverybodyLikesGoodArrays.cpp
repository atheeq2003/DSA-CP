// 800  - A
// 1777 - Everybody Likes Good Arrays! (greedy, math)
// https://codeforces.com/problemset/problem/1777/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count = 0;
        vector<int> arr(n);
        for(auto &i : arr) {
            cin >> i;
        }
        for(int i=0; i<n-1; i++) {
            count+=(arr[i]%2 == arr[i+1]%2);
        }
        cout << count << "\n";
    }
}