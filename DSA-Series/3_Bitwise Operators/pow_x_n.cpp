#include<bits/stdc++.h>
using namespace std;

double power(double x, int n) {
    long binForm = n;
    if(binForm < 0) {
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0) {
        if(binForm % 2 == 1) {
            ans = ans * x;
        }
        x = x * x;
        binForm = binForm / 2;
    }
    return ans;
}

int main() {
    double x;
    cin >> x;
    int n;
    cin >> n;
    cout << power(x, n) << endl;
}