// https://www.hackerearth.com/problem/algorithm/pattern/?purpose=login&source=problem-page&update=google
/*
   *****
      *
     *
    *
   *****
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < n; i++) {
            cout << "*";
        }
    cout << endl;
}