// 238. Product of Array Except Self -> https://leetcode.com/problems/product-of-array-except-self/description/
#include<bits/stdc++.h>
using namespace std;

vector<int> prodExceptSelf(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n, 1);
    for(int i = 1; i < n; i++) {
        ans[i] = arr[i-1] * ans[i-1];
    }
    int suffix = 1;
    for(int j = n - 2; j >= 0; j--) {
        suffix = suffix * arr[j+1];
        ans[j] = ans[j] * suffix;
    }
    return ans;
}

vector<int> productExceptSelf(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    for(int i = 0; i < arr.size(); i++) {
        int prod = 1;
        for(int j = 0; j < arr.size(); j++) {
            if(i != j) {
                prod = prod * arr[j];
            }
        }
        ans[i] = prod;
    }
    return ans; 
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(arr);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    vector<int> sol = prodExceptSelf(arr);
    for(int i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }
}