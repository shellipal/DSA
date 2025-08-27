#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, char dig)
{
    // horizontal.....
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
        {
            return false;
        }
    }
    // vertical.....
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
        {
            return false;
        }
    }
    // grid.....
    int srow = (row / 3) * 3;
    int scol = (col / 3) * 3;

    for (int i = srow; i <= srow + 2; i++)
    {
        for (int j = scol; j <= scol + 2; j++)
        {
            if (board[i][j] == dig)
            {
                return false;
            }
        }
    }

    return true;
}

bool sudokuHelper(vector<vector<char>> &board, int row, int col)
{
    // Base Case....
    if (row == 9)
    {
        return true;
    }

    // for restart from next row.....
    int nextRow = row;
    int nextCol = col + 1;
    if (nextCol == 9)
    {
        nextRow = row + 1;
        nextCol = 0;
    }

    // checking if there is already digit or not....
    if (board[row][col] != '.')
    {
        return sudokuHelper(board, nextRow, nextCol);
    }

    // place the digit....
    for (char dig = '1'; dig <= '9'; dig++)
    {
        if (isSafe(board, row, col, dig))
        {
            board[row][col] = dig;
            if (sudokuHelper(board, nextRow, nextCol))
            {
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}

void sudokuSolver(vector<vector<char>> &board)
{
    sudokuHelper(board, 0, 0);
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << "Sudoku before solving:\n";
    for (auto &row : board)
    {
        for (auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }

    cout << "\nSolving Sudoku...\n\n";
    sudokuSolver(board);

    cout << "Sudoku after solving:\n";
    for (auto &row : board)
    {
        for (auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
