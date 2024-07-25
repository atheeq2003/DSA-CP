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
        map<int,int> mp;
        for(auto a : arr) {
            mp[a]++;
        }
        if(mp.size() == 1) {
            cout << "-1" << "\n";
        }
        else {
            int ele = begin(mp) -> first;
            int fre = begin(mp) -> second;
            cout << fre << " " <<n-fre << "\n";
            for(int i=0; i<fre; i++) {
                cout << ele << " ";
            }
            cout << "\n";
            mp.erase(ele);
            for(auto [e,f]: mp)
                for(int i=0; i<f; i++)
                    cout << e << " ";
            cout << "\n";
        }
    }
}