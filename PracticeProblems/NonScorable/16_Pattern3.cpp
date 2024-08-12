// https://www.hackerearth.com/problem/golf/print-the-pattern/
// val=num+i-1; The next line should start with the value of previous last num + the row value
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int num=1;
    for(int i=1; i<=N; i++) {
        if(i % 2 != 0) {
            int val=num+i-1;
            for(int j=1; j<=i;j++) {
                cout << val << " ";
                val--;
                num++;
            }
        }
        else {
            for(int j=1; j<=i;j++) {
                cout << num << " ";
                num++;
            }
        }
        cout << endl;
    }
}
