// 74. Search a 2D Matrix -> https://leetcode.com/problems/search-a-2d-matrix/description/
#include<bits/stdc++.h>
using namespace std;

bool findTarget(vector<vector<int>> matrix, int target, int midRow) {
    int n = matrix[0].size();
    int start = 0; 
    int end = n - 1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(matrix[midRow][mid] == target) {
            return true;
        }
        else if(matrix[midRow][mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int start = 0;
    int end = matrix.size()-1;
    while(start <= end) {
        int midRow = start + (end - start)/2;
        if(matrix[midRow][0] <= target && target <= matrix[midRow][n-1]) {
            return findTarget(matrix, target, midRow);
        }
        else if(target >= matrix[midRow][n-1]) {
            start = midRow + 1;
        }
        else {
            end = midRow - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 14;
    cout << searchMatrix(matrix, target);
}