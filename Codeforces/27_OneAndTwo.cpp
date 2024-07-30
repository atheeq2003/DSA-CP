#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> v;
        int one=0, two=0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] == 1) {
                one++;
            }
            else { 
                two++;
                v.push_back(i+1);
            }
        }
        if(two % 2 != 0) {
            cout << -1;
        }
        else {
            if(two == 0) {
                cout << 1;
            }
            else {
                int pos = v.size()/2;
                pos--;
                cout << v[pos];
            }
        }
        cout << "\n";
    }
}