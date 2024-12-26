#include<bits/stdc++.h>
using namespace std;
int digitSum(int num) {
    int sum = 0;
    while(num != 0) {
        int lastDigit = num % 10;
        sum = sum + lastDigit;
        num = num / 10;
    }
    return sum;
}

int digitRev(int num) {
    int rev = 0;
    while(num != 0) {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }
    return rev;
}

void isPalindrome(int num) {
    int rev = 0;
    int realNum = num;
    while(num != 0) {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }
    if(realNum == rev) {
        cout << "It is a Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }
}
    
int main() {
    int n;
    cin >> n;
    cout << "Sum of Digits: " << digitSum(n) << endl;
    cout << "Reverse of Digits: " << digitRev(n) << endl;
    isPalindrome(n);
}