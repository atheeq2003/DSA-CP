#include<bits/stdc++.h>
using namespace std;
void min(int a, int b, int c) {
    if(a <= b && a <= c) {
        cout << a << " ";
    }
    else if(b <= a && b <= c){
        cout << b << " ";
    }
    else {
        cout << c << " ";
    }
}
void max(int a, int b, int c) {
    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else if(b >= a && b >= c){
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }
}
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    min(a,b,c);
    max(a,b,c);
    /*  Alternate Method
        int a,b,c;
        cin >> a >> b >> c;
        cout << min({a,b,c}) << " " << max({a,b,c}) << endl;
    */
}