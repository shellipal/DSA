#include <iostream>
using namespace std;

// maximum rows sum...................................
int getMaxSumR(int mat[][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSumI = rowSumI + mat[i][j];
        }

        maxRowSum = max(maxRowSum, rowSumI);
    }

    return maxRowSum;
}

// maximum cols sum.............................

int getMaxSumC(int mat[3][3], int rows, int cols)
{
    int maxColSum = INT_MIN;

    for (int j = 0; j < cols; j++)
    {
        int colSumJ = 0;
        for (int i = 0; i < rows; i++)
        {
            colSumJ = colSumJ + mat[i][j];
        }

        maxColSum = max(maxColSum, colSumJ);
    }
    return maxColSum;
}

int main()
{
    int matrix[3][3] = {{1, 20, 30},
                        {4, 50, 60},
                        {7, 80, 9}};

    int rows = 3;
    int cols = 3;

    cout << getMaxSumR(matrix, rows, cols) << endl;
    cout << getMaxSumC(matrix, rows, cols) << endl;
    return 0;
}