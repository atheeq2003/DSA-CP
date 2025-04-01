// 84. Largest Rectangle in Histogram -> https://leetcode.com/problems/largest-rectangle-in-histogram/description/
#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights) {
    int n = heights.size();
    vector<int> right(n, 0);
    vector<int> left(n, 0);
    stack<int> s;
    int ans = 0;
    // Right
    for(int i = n-1; i >= 0; i--) {
        while(s.size() > 0 && heights[s.top()] >= heights[i]) {
            s.pop();
        }

        if(s.empty()) {
            right[i] = n;
        }
        else {
            right[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()) {
        s.pop();
    }

    // Left
    for(int i = 0; i < n; i++) {
        while(s.size() > 0 && heights[s.top()] >= heights[i]) {
            s.pop();
        }

        if(s.empty()) {
            left[i] = n;
        }
        else {
            left[i] = s.top();
        }
        s.push(i);
    }

    for(int i = 0; i < n; i++) {
        int width = right[i] - left[i] - 1;
        int currArea = heights[i] * width;
        ans = max(ans, currArea);
    }
    return ans;
}

int main() {
    vector<int> heights = {2,1,5,6,2,3};
    cout << largestRectangleArea(heights);
}