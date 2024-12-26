// Given the number 'n'. Find out and return the number of digits present in a number.
#include<bits/stdc++.h>
using namespace std;
int count(int n) {
    int count=0;
    // brute force approach
/*   while(n > 0) {
        n = n / 10;
        count++;
    }
*/
    count=(int) (log10(n)+1);
    return count;
}
int main() {
    int output = count(156);
    cout << output << endl;
}