// 2710 - Remove Trailing Zeros From a String
// Easy - String
// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/
#include<bits/stdc++.h>
using namespace std;
string removeTrailingZeros(string num) {
    int n = num.length();
    int i;
    for(i = n - 1; i >= 0; i--){
        if(num[i] != '0') break;
    }
    return num.substr(0,i + 1);
}
int main() {
    string output = removeTrailingZeros("51230100");
    cout << output;
}