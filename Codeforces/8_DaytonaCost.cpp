// 800  - A
// 1878 - How Much Does Daytona Cost? (greedy)
// https://codeforces.com/problemset/problem/1877/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(auto &i : arr) {
            cin >> i;
        }
        if(find(arr.begin(), arr.end(), k) != arr.end())
            cout << "YES" << endl; 
        else 
            cout << "NO" << endl;
    }
}