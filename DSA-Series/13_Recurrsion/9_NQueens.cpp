// 51. N-Queens -> https://leetcode.com/problems/n-queens/submissions/1575631014/
#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) {
    // Vertical Check
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Left Diagonal Check
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Right Diagonal Check
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void getNQueens(vector<string> &board, vector<vector<string>> &ans, int row, int n) {
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            getNQueens(board, ans, row + 1, n);
            board[row][col] = '.'; // Backtrack
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    getNQueens(board, ans, 0, n);
    return ans;
}

int main() {
    int n = 4;
    vector<vector<string>> ans = solveNQueens(n);

    for (const auto &solution : ans) {
        for (const auto &row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
