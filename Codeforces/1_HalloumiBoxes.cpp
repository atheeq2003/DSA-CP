#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        if(is_sorted(arr.begin(),arr.end()) || k>1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        } 
    }
}