/*
    1 1 1 1
      2 2 2
        3 3
          4
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int value = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = 0; j < n - i; j++) {
            cout << value << " ";
        }
        value++;
        cout << endl;
    }
}