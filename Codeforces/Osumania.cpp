// https://codeforces.com/contest/2009/problem/B
// Div 4
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            for (int j = 1; j <= 4; j++) {
                if (str[j-1] == '#') {
                    arr.push_back(j);
                    break; 
                }
            }
        }
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}