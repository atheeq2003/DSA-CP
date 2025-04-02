// 42. Trapping Rain Water -> https://leetcode.com/problems/trapping-rain-water/description/
#include<bits/stdc++.h>
using namespace std;

// TC: O(n) SC: O(1)
int trapOptimal(vector<int> &height) {
    int n = height.size();
    int maxLeft = height[0];
    int maxRight = height[n-1];
    int i = 0;
    int j = n-1;
    int ans = 0;
    while(i < j) {
        maxLeft = max(maxLeft, height[i]);
        maxRight = max(maxRight, height[j]);
        if(maxLeft < maxRight) {
            ans += maxLeft - height[i];
            i++;
        }
        else {
            ans += maxRight - height[j];
            j--;
        }
    }
    return ans;
}

// TC: O(n) SC: O(n)
int trapBetter(vector<int> &height) {
    int n = height.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    left[0] = height[0];
    right[n-1] = height[n-1];

    for(int i = 1; i < n; i++) {
        left[i] = max(left[i-1], height[i]);
    }

    for(int i = n-2; i >= 0; i--) {
        right[i] = max(right[i+1], height[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += min(right[i], left[i]) - height[i];
    }

    return ans;
}

int main() {
    vector<int> height = {4,2,0,3,2,5};
    cout << trapBetter(height) << endl;
    cout << trapOptimal(height) << endl;
}