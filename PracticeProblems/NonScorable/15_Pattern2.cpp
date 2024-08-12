// https://www.geeksforgeeks.org/problems/pattern-printing1347/1
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=i;j++) {
            cout << "*";
        }
        cout << " ";
    }
}