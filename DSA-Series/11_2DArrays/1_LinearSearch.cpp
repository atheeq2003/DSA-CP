// 1351. Count Negative Numbers in a Sorted Matrix -> https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] < 0) {
                count++;
            }
        }
    }
    return count;
}

pair<int,int> linearSearchIndex(vector<vector<int>> &arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

bool linearSearch(vector<vector<int>> &arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6, 11, 12}, {7, 8, 9}};
    vector<vector<int>> grid = {{4,3,2,-1}, {3,2,1,-1}, {1,1,-1,-2}, {-1,-1,-2,-3}};
    int target = 0;
    cout << linearSearch(arr, target) << endl;
    pair<int,int> p = linearSearchIndex(arr, target);
    cout << p.first << " " << p.second << endl;
    cout << countNegatives(grid) << endl;
}