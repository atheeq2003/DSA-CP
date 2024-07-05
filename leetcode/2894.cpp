// 2894 - Divisible and Non-divisible Sums Difference
// Easy - Math
// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/
#include<bits/stdc++.h>
using namespace std;
int differenceOfSums(int n, int m) {
    int num1, num2;
    num1 = n*(n+1)/2;
    num2 = m*(1+(n/m))*(n/m);
    int result = num1-num2;
    return result;
}
int main(){
    int output = differenceOfSums(10,3);
    cout << output;
}