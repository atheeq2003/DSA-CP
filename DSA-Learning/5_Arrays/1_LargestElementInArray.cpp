// Largest Element in an Array
#include<bits/stdc++.h>
using namespace std;

/* 
Brute Force Approach:
    Time Complexity: O(N*log(N))
    Space Complexity: O(n) 
*/
int largestElementBrute(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int ans = arr[arr.size()-1];
    return ans;
}


/* 
Optimised Approach:
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
int largestElementOptimised(vector<int> arr) {
    int max = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    cout << largestElementBrute(arr) << "\n";
    cout << largestElementOptimised(arr);
}
