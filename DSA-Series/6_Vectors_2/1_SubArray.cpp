// Printing all possible sub arrays
#include<bits/stdc++.h>
using namespace std;
void allPossibleSubArrays(vector<int> arr) {
    for(int start = 0; start < arr.size(); start++) {
        for(int end = start; end < arr.size(); end++) {
            for(int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    allPossibleSubArrays(arr);
}