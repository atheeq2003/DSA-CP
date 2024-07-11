// Basic Data Types
// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n"; 
    cout << fixed << d << "\n";  
    cout << fixed << e << "\n";
    return 0;
}
