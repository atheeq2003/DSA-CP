// 7 - Reverse Integer
// Medium - Math
// https://leetcode.com/problems/reverse-integer/description/
#include<bits/stdc++.h>
using namespace std;
// Initial Approach 
/*
int reverse(int x) {
    int revNum=0;
    bool isNegative=false;
    if(x < 0) {
        string str=to_string(x);
        str.erase(0,1);
        x = stoi(str);
        cout << x;
        isNegative=true;
    }
    while(x > 0) {
        int lastdigit = x % 10;
        x = x/10;
        if (revNum > (INT_MAX / 10) || (revNum == INT_MAX / 10 && lastdigit > 7)) {
            return 0; 
        }
        revNum=revNum*10+lastdigit;
    }
    if(isNegative) {
        revNum = -revNum;
    }
    return revNum;
}
*/
// Works in LC
int reverse(int x) {
    int y=0;
        while(x){
            if(y>INT_MAX/10 || y<INT_MIN/10){
                return 0;
            }else{
                y=y*10 +x%10;
                x=x/10;
            }
        }
        return y;
    }
int main() {
    int output = reverse(-2147483648);
    cout << output;
}