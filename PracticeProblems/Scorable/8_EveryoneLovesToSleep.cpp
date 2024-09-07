// https://codeforces.com/problemset/problem/1714/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sleepHr, sleepMin;
        cin >> n >> sleepHr >> sleepMin;
        int sleepInMin = sleepHr*60 + sleepMin;
        int totalHrSlept;
        int totalDaymin = 24*60;
        int minofalrmMin = 24*60;
        for(int i=0; i<n; i++) {
            int alrmHr, alrmMin;
            cin >> alrmHr >> alrmMin;
            int alrmInMin = alrmHr*60 + alrmMin;
            int totalHrSlept = alrmInMin - sleepInMin;
            if(totalHrSlept < 0) {
                totalHrSlept += 24*60;
            }
            minofalrmMin = min(totalHrSlept, minofalrmMin);
        }
        cout << minofalrmMin/60 << " " << minofalrmMin%60 << "\n";
    }
}