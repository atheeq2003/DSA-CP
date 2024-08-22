// https://atcoder.jp/contests/abc258/tasks/abc258_a
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    int initialHour = 21;
    int mins = k;
    if(k >= 60) {
        initialHour++;
        mins = mins - 60;
    }
    cout << initialHour << ":";
    if(mins < 10) {
        cout << 0 << mins << "\n";
    }
    else {
        cout << mins << "\n";
    }
}