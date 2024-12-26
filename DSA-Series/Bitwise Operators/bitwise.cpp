#include<bits/stdc++.h>
using namespace std;
int main() {
    int a = 6;
    int b = 10;
    cout << "AND of a and b = " << (a & b) << endl;
    cout << "OR of a and b = " << (a | b) << endl;
    cout << "XOR of a and b = " <<  (a ^ b) << endl;
    // 10 << 1 , 10 << 2 (10 = a), (b = 1, 2) => a*2^b - a*2^1, a*2^2
    int ansLeft1 = (b * pow(2,1));
    int ansLeft2 = (b * pow(2,2));
    cout << "b left shift by 1 place: " << (b << 1) << endl;
    cout << "b left shift by 2 places: " << (b << 2) << endl;
    cout << "By using formula: a * b" << ansLeft1 << endl;
    cout << "By using formula: " << ansLeft2 << endl;
    // 10 >> 1 , 10 >> 2 (10 = a), (b = 1, 2) => a/2^b - a*2/1, a/2^2
    int ansRight1 = (b / pow(2,1));
    int ansRight2 = (b / pow(2,2));
    cout << "b right shift by 1 places: " << (b >> 1) << endl;
    cout << "b right shift by 2 places: " << (b >> 2) << endl;
    cout << "By using formula: " << ansRight1 << endl;
    cout << "By using formula: " << ansRight2 << endl;
    // long -> to store up to 8 bytes
    // long long -> 8 bytes
    // stores only positive numbers
    unsigned u = -10;
    cout << u << endl;
    // signed int -> store postive and negative numbers
    int n = -10;
    cout << n << endl;
}