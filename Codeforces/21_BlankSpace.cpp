#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count=0;
        int ans=0;
        vector<int> arr(n);
        for(auto &i : arr) {
            cin >> i;
        }
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                count++;
            }
            else {
                ans = max(ans, count);
                count = 0;
            } 
        }
        cout << max(ans, count) << "\n";
        
    }
}