#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if(x > y && x > z) {
        cout << x << "\n";
    }
    else if(y > x && y > z){
        cout << y << "\n";
    }
    else {
        cout << z << "\n";
    }
}