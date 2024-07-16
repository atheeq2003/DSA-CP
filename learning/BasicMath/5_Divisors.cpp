// Divisors
#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach
/*
void divisors(int n) {
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            cout << i << " "; 
        }
    }
}
*/
// Optimal Approach
void divisors(int n) {
    vector<int> divi;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            divi.push_back(i);
            if((n/i) != i){
                divi.push_back(n/i);
            }
        }
    }
    sort(divi.begin(),divi.end());
    for(auto it: divi) {
        cout << it << " ";
    }
}
int main() {
    divisors(36);
}