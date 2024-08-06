// Prime Check
#include<bits/stdc++.h>
using namespace std;
bool PrimeCheck(int n) {
    int count = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n%i==0) {
            count++;
            if((n/i) != i) {
                count++;
            }
        }
    }
    if(count==2)
        return true;
    else 
        return false;
}
int main() {
    int output = PrimeCheck(5);
    cout << output;
}