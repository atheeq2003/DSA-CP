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