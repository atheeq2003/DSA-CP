/*
    A B C D E
    A B C D E
    A B C D E
    A B C D E
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        char ch = 'A';
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}