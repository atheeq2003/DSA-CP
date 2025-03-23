#include<bits/stdc++.h>
using namespace std;

// TC: Total No of Recursive Calls * Workdone in each call
// SC: Depth of Recursion Tree * Memory in each call

// TC: O(n) * O(1) = therefore, O(n)
// SC: O(n) -> Because in recursion, call stack is used. If done using for loop the SC: would be O(1);

int sumNnums(int n) {
    if(n == 1) {
        return 1;
    }
    return n + sumNnums(n-1);
}

int main() {
    int n = 5;
    int sum = sumNnums(n);
    cout << sum << endl;
}