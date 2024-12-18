/*
    A B C 
    D E F
    G H I
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char ch = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}