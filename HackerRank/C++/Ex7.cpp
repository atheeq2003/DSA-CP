// Pointer
// https://hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
void update(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}
int main(){
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n" << b;
}