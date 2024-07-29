#include<bits/stdc++.h>
using namespace std;
bool check(int num) {
    int count = 0;
    while(num > 0) {
        int d = num % 10;
        if(d != 0)
            count++;
        num /= 10;
    }
    return count == 1;
}
int main() {
    set<int> candidates;
    for(int i=1; i<1e7; i++) {
        if(check(i))
            candidates.insert(i);
    }
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count = 0;
        for(auto i : candidates) {
            if(i <= n)
                count++;
        }
        cout << count << "\n";
    }
}