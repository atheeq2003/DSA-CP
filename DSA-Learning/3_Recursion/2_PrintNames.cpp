#include<bits/stdc++.h>
using namespace std;
void printNames(int cnt, int n) {
    if(cnt > n) {
        return;
    }
    cout << "Atheeq" << " ";
    printNames(cnt+1, n);
}
int main() {
    int n;
    cin >> n;
    printNames(1, n);
}