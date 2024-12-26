#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int binaryNum) {
    int ans = 0;
    int lastDigit = 0;
    int pow = 1;
    while(binaryNum != 0) {
        lastDigit = binaryNum % 10;
        ans += lastDigit * pow;
        binaryNum = binaryNum / 10;
        pow = pow * 2;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    cout << "Decimal of Binary " << n << " = " << binaryToDecimal(n);
}