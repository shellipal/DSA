#include <iostream>
using namespace std;

int DiagonalSum(int mat[][4], int n)
{
    int sum = 0;

    // brute force approach for diagonal sum................................................................

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum = sum + mat[i][j];
    //         }
    //         else if (j == n - 1 - i)
    //         {
    //             sum += mat[i][j];
    //         }
    //     }
    // }
    // return sum;

    // optimal approach................................................
    // primary dig = j = i
    // secondary dig = j = n-1-i

    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - 1 - i)
        {
            sum += mat[i][n - 1 - i];
        }
    }
    return sum;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4;

    cout << DiagonalSum(matrix, n) << endl;
    return 0;
}