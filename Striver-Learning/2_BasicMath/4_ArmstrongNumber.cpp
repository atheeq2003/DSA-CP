// Armstrong Number
#include<bits/stdc++.h>
using namespace std;
bool armstrongNumber(int x) {
    int n=x;
    int cubicSum=0;
    string digits=to_string(x);
    int count=digits.size();
    while(x){
        int lastDigit = x%10;
        x=x/10;
        cubicSum=cubicSum+pow(lastDigit,count);
    }
    if(cubicSum == n)
        return true;
    else
        return false;
}
int main() {
    int output = armstrongNumber(371);
    cout << output;
}