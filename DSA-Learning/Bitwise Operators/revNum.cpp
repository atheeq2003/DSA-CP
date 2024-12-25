#include<bits/stdc++.h>
using namespace std;
int revNum(int num) {
    int lastDigit = 0;
    int rev = 0;
    while(num != 0) {
        lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    cout << "Reversed Num: " << revNum(n) << endl;
}