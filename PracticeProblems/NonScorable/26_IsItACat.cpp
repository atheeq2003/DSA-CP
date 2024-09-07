#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), [] (char c) {
            return tolower(c);
        });
        s.erase(unique(s.begin(), s.end()), s.end());
        if(s == "meow") {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }
    }
}