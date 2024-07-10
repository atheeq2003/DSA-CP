#include<bits/stdc++.h>
using namespace std;
int smallestEvenMultiple(int n) {
    int smallMultiple = 2*n;
    if(n%2==0) {
        return n;
    }
    else {
        return smallMultiple;
    }
}
int main() {
    int output = smallestEvenMultiple(6);
    cout << output << endl;
}