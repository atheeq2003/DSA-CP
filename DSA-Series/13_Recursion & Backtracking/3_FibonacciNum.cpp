// 509. Fibonacci Number -> https://leetcode.com/problems/fibonacci-number/description/
#include<bits/stdc++.h>
using namespace std;
// TC: O(n) SC: O(1)
// Iterative Approach
int fibI(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int prev0 = 0, prev1 = 1;
    for(int i = 2; i <= n; i++) {
        int curr = prev0 + prev1;
        prev0 = prev1;
        prev1 = curr;
    }
    return prev1;
}
// TC: O(2^n) SC: O(n)
// Recursive Approach
int fibR(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fibR(n-1) + fibR(n-2);
}

int main() {
    int n = 4;
    int ans1 = fibR(n);
    cout << ans1 << endl;
    int ans2 = fibI(n);
    cout << ans2 << endl;
}