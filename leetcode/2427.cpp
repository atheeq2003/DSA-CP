// 2427 - Number of Common Factors
// Easy - Math, Enumeration, Number Theory
// https://leetcode.com/problems/number-of-common-factors/description/
#include<bits/stdc++.h>
using namespace std;
int commonFactors(int a, int b) {
    int count = 0;
    for(int i = 1; i <= 1000; i++) {
        if(a % i == 0 && b % i == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int output = commonFactors(12,6);
    cout << output;
}