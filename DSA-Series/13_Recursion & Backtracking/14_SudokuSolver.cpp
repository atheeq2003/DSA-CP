// 37. Sudoku Solver -> https://leetcode.com/problems/sudoku-solver/description/
#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, char digit)
{
    // Horizontal
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == digit)
        {
            return false;
        }
    }

    // Vertical
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == digit)
        {
            return false;
        }
    }

    // Grid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i <= startRow + 2; i++)
    {
        for (int j = startCol; j <= startCol + 2; j++)
        {
            if (board[i][j] == digit)
            {
                return false;
            }
        }
    }
    return true;
}

bool solver(vector<vector<char>> &board, int row, int col)
{
    if (row == 9)
    {
        return true;
    }

    int nextRow = row;
    int nextCol = col + 1;
    if (nextCol == 9)
    {
        nextRow = nextRow + 1;
        nextCol = 0;
    }

    if (board[row][col] != '.')
    {
        return solver(board, nextRow, nextCol);
    }

    for (char digit = '1'; digit <= '9'; digit++)
    {
        if (isSafe(board, row, col, digit))
        {
            board[row][col] = digit;
            if (solver(board, nextRow, nextCol))
            {
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>> &board)
{
    int row = 0;
    int col = 0;
    solver(board, row, col);
}

int main()
{
    vector<vector<char>> board = {
        {'.', '.', '9', '7', '4', '8', '.', '.', '.'}, 
        { '7', '.', '.', '.', '.', '.', '.', '.', '.' }, 
        { '.', '2', '.', '1', '.', '9', '.', '.', '.' }, 
        { '.', '.', '7', '.', '.', '.', '2', '4', '.' }, 
        { '.', '6', '4', '.', '1', '.', '5', '9', '.' }, 
        { '.', '9', '8', '.', '.', '.', '3', '.', '.' }, 
        { '.', '.', '.', '8', '.', '3', '.', '2', '.' }, 
        { '.', '.', '.', '.', '.', '.', '.', '.', '6' }, 
        { '.', '.', '.', '2', '7', '5', '9', '.', '.' }
    };
    solveSudoku(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}