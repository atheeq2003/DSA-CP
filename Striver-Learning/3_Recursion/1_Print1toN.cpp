#include<bits/stdc++.h>
using namespace std;
void printNos(int cnt, int n) {
    if(cnt > n) {
        return;
    } 
    cout << cnt << " ";
    printNos(cnt+1, n);
}
int main() {
    int n;
    cin >> n;
    printNos(1,n);
}