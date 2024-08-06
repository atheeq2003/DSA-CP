#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
void printNos(int n) {
    if(cnt == n+1) {
        return;
    } 
    cout << cnt << " ";
    cnt++;
    printNos(n);
}
int main() {
    int n;
    cin >> n;
    printNos(n);
}