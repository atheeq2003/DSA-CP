// 800  - A
// 1834 - Unit Array (greedy, math)
// https://codeforces.com/problemset/problem/1834/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int f1=0, f2=0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] == -1)
                f1++;
            else
                f2++;
        }
        if(f1 <= f2) {
            if(f1 % 2 == 1) 
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else {
            int ops = f1 - n/2;
            if((n/2) % 2 == 1) 
                ops+=1;
            cout << ops << "\n";
        }
    }
}