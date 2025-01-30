// https://leetcode.com/problems/spiral-matrix/description/ -> https://leetcode.com/problems/spiral-matrix/description/
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int startRow = 0, endRow = m-1;
    int startCol = 0, endCol = n-1;
    while(startRow <= endRow && startCol <= endCol) {
        // Top
        for(int i = startCol; i <= endCol; i++) {
            ans.push_back(matrix[startRow][i]);
        }
        // Right
        for(int i = startRow+1; i <= endRow; i++) {
            ans.push_back(matrix[i][endCol]);
        }
        // Bottom
        for(int i = endCol-1; i >= startCol; i--) {
            if(startRow == endRow) {
                break;
            }
            ans.push_back(matrix[endRow][i]);
        }
        // Left
        for(int i = endRow-1; i >= startRow+1; i--) {
            if(startCol == endCol) {
                break;
            }
            ans.push_back(matrix[i][startCol]);
        }
        startRow++; endRow--;
        startCol++; endCol--;
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    vector<int> ans = spiralOrder(matrix);
    for(int i : ans) {
        cout << i << " ";
    }
}