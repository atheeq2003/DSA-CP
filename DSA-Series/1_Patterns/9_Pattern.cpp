/*
    1
    1 2
    1 2 3
    1 2 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int value = 1;
        for(int j = 0; j < i+1; j++) {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}