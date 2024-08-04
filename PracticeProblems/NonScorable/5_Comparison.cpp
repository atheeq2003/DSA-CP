// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    if(a > b) {
        if(c == '>') {
            cout << "Right" << "\n";
        }
        else {
            cout << "Wrong" << "\n";
        }
    }
    else if(a < b){
        if(c == '<') {
            cout << "Right" << "\n";
        }
        else {
            cout << "Wrong" << "\n";
        }
    }
    else if(a == b){
        if(c == '=') {
            cout << "Right" << "\n";
        }
        else {
            cout << "Wrong" << "\n";
        }
    }
}