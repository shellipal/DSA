#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(vector<vector<int>> &grid, int row, int col, int n, int expval)
{

    if (row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expval)
    {
        return false;
    }
    if (expval == n * n - 1)
    {
        return true;
    }

    // 8 possible moves......
    int ans1 = isvalid(grid, row - 2, col + 1, n, expval + 1);
    int ans2 = isvalid(grid, row - 1, col + 2, n, expval + 1);
    int ans3 = isvalid(grid, row + 1, col + 2, n, expval + 1);
    int ans4 = isvalid(grid, row + 2, col + 1, n, expval + 1);
    int ans5 = isvalid(grid, row + 2, col - 1, n, expval + 1);
    int ans6 = isvalid(grid, row + 1, col - 2, n, expval + 1);
    int ans7 = isvalid(grid, row - 1, col - 2, n, expval + 1);
    int ans8 = isvalid(grid, row - 2, col - 1, n, expval + 1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValid(vector<vector<int>> &grid)
{
    return isvalid(grid, 0, 0, grid.size(), 0);
}

int main()
{
    // Example knight's tour grid (n = 5)
    vector<vector<int>> grid = {
        {0, 3, 6, 9, 20},
        {5, 8, 19, 2, 11},
        {18, 1, 4, 21, 10},
        {7, 16, 23, 12, 25},
        {24, 17, 14, 13, 22}};

    if (checkValid(grid))
        cout << "Valid Knight's Tour" << endl;
    else
        cout << "Not a valid Knight's Tour" << endl;

    return 0;
}