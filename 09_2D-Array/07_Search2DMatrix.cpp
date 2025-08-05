#include <iostream>
#include <vector>
using namespace std;

bool SearchInRow(vector<vector<int>> &mat, int target, int row)
{
    int n = mat[0].size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool SearchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size();
    int n = mat[0].size();

    int startRow = 0;
    int endRow = m - 1;

    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;

        if (target >= mat[midRow][0] && target <= mat[midRow][n - 1])
        {
            // found the row.....now BS on this row...............
            return SearchInRow(mat, target, midRow);
        }
        else if (target > mat[midRow][n - 1])
        {
            // down => right.................
            startRow = midRow + 1;
        }
        else
        {
            // up => left...........................
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12}};
    int n = 4;
    cout << SearchMatrix(matrix, 11) << endl;
    return 0;
}