// 2596. Check Knight Tour Configuration -> https://leetcode.com/problems/check-knight-tour-configuration/description/
#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> &grid, int row, int col, int n, int ExpValue) {
    if(row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != ExpValue) {
        return false;
    }
    if(ExpValue == n*n-1) {
        return true;
    }

    bool ans1 = isValid(grid, row-2, col+1, n, ExpValue+1);
    bool ans2 = isValid(grid, row-1, col+2, n, ExpValue+1);
    bool ans3 = isValid(grid, row+1, col+2, n, ExpValue+1);
    bool ans4 = isValid(grid, row+2, col+1, n, ExpValue+1);
    bool ans5 = isValid(grid, row+2, col-1, n, ExpValue+1);
    bool ans6 = isValid(grid, row+1, col-2, n, ExpValue+1);
    bool ans7 = isValid(grid, row-1, col-2, n, ExpValue+1);
    bool ans8 = isValid(grid, row-2, col-1, n, ExpValue+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>> &grid) {
    int row = 0;
    int col = 0;
    int n = grid.size();
    int ExpValue = 0;
    return isValid(grid, row, col, n, ExpValue);
}

int main() {
    vector<vector<int>> grid = {
        {0,11,16,5,20},
        {17,4,19,10,15},
        {12,1,8,21,6},
        {3,18,23,14,9},
        {24,13,2,7,22}
        /*{0,3,6},
        {5,8,1},
        {2,7,4}*/
    };

    cout << checkValidGrid(grid);
}