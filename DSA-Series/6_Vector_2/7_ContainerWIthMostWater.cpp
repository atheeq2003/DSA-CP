// 11. Container With Most Water -> https://leetcode.com/problems/container-with-most-water/description/
#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> height) {
    int maxArea = 0;
    int left = 0;
    int right = height.size() - 1;
    while(left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;
        maxArea = max(maxArea, area);
        if(height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return maxArea;
}

int main() {
    vector<int> height = {8, 7, 2, 1};
    cout << maxArea(height) << endl;
}