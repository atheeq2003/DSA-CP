/*
    1 2 3
    4 5 6
    7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int value = 1; // Start with number which you want to be printed first
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << value << " ";
            value = value + 1;
        }
        cout << endl;
    }
}