// 1281 - Subtract the Product and Sum of Digits of an Integer
// Easy - Math
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/ 
#include<bits/stdc++.h>
using namespace std;
int subtractProductAndSum(int n) {
    string str;
    str = to_string(n);
    int product=1;
    int sum=0;
    for(int i=0;i<str.size();i++) {
        int digits=str[i]-'0';
        product *= digits;
        sum += digits;   
    }
    return product-sum;
}
int main() {
    int output = subtractProductAndSum(234);
    cout << output;
}