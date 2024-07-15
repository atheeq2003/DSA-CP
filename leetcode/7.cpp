#include<bits/stdc++.h>
using namespace std;
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
int main() {
    int output = reverse(-2147483648);
    cout << output;
}