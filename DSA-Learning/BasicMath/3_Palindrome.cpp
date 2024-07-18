// https://leetcode.com/problems/palindrome-number/description/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
    long long revX=0;
    long long n=x;
    if(x>=0){
        while(x) {
            int lastDigit=x%10;
            x=x/10;
            revX=revX*10+lastDigit;
        }
    }
    else
        return false; 
    if(revX==n)
        return true;
    else
        return false;
}
int main() {
    bool output = isPalindrome(121);
    cout << output;
}