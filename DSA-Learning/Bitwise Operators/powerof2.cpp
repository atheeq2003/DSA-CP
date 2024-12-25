// Brute Force Approach
#include<bits/stdc++.h>
using namespace std;
bool bruteForce(int num) {
    int ans = 0;
    int pow = 1;
    int rem = 0;
    // Convert decimal to binary
    while(num != 0) {
        rem = num % 2;
        num = num / 2;
        ans += rem * pow;
        pow = pow * 10;
    }
    int count = 0;
    string str = to_string(ans);
    for(char ch : str) {
        if(ch == '1') {
            count++;
        }
    }
    if(count == 1) {
        return true;
    }
    else {
        return false;
    }
}

// Better Solution
bool betterSol(int num) {
    if(num <= 0) {
        return false;
    }
    int rem = 0;
    do {
        rem = num % 2;
        num = num / 2;
    }while(rem == 0);
    if(num == 0) {
        return true;
    }
    else {
        return false;
    }
}

// Optimised Solution
bool optSol(int num) {
    if(num <= 0) {
        return false;
    }
    if((num & (num - 1)) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    cout << "Brute Force ans: " << bruteForce(n) << endl;
    cout << "Better Solution ans: " << betterSol(n) << endl;
    cout << "Optimized Solution ans: " << optSol(n) << endl;
}