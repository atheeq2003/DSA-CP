// 240. Search a 2D Matrix II -> https://leetcode.com/problems/search-a-2d-matrix-ii/description/
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0;
    int col = n-1;
    while(col >= 0 && row < m) {
        if(matrix[row][col] == target) {
            return true;
        }
        else if(matrix[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
            {1,4,7,11,15}, 
            {2,5,8,12,19}, 
            {3,6,9,16,22}, 
            {10,13,14,17,24}, 
            {18,21,23,26,30}
        };
    int target = 20;
    cout << searchMatrix(matrix, target) << endl;
}