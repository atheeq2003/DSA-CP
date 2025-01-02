#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> arr, int target) {
    for(int i=0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int target = 8;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << linearSearch(arr, target) << endl;
}