// 2582 - Pass the Pillow
// Easy - Math, Simulation
// https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06
// https://leetcode.com/problems/pass-the-pillow/description/
#include<bits/stdc++.h>
using namespace std;
int passThePillow(int n, int time) {
    int pos = 1;
    for(int i=0; i<time;i) {
        for(i;i<time && pos<n;i++) {
            pos++;
        }
        for(i;i<time && pos>1;i++) {
            pos--;
        }
    }
    return pos;
}
int main() {
    int output = passThePillow(18,38);
    cout << output;
}