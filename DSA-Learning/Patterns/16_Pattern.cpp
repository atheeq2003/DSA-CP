/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1  
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int value = 1;
        for(int j = 0; j < n - i; j++) {
            cout << " " << " ";
        }
        for(int j = 0; j < i+1; j++) {
            cout << value << " ";
            value++;
        }
        for(int j = 0; j < i; j++) {
            cout << i - j << " ";
        }
        cout << endl;
    }
}