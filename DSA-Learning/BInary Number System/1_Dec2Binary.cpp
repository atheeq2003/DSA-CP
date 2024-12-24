#include<bits/stdc++.h>
using namespace std;
int decToBinary(int num) {
    int rem = 0;
    int pow = 1;
    int ans = 0;
    while(num != 0) {
        rem = num % 2;
        num = num / 2;
        ans += rem * pow;
        pow = pow * 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << "Decimal to Binary Conversion of " << n << " = " << decToBinary(n) << endl;
    for(int i = 2; i <= 10; i++) {
        cout << decToBinary(i) << endl;
    }
}