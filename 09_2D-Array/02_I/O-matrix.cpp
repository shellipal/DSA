#include <iostream>
using namespace std;

int main()
{
    // print matrix in output............................................................
    //  int matrix[4][3] = {{1, 2, 3},
    //                      {4, 5, 6},
    //                      {7, 8, 9},
    //                      {10, 11, 12}};

    // int row = 4;
    // int col = 3;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // input a matrix from user..............................................................

    int Imatrix[4][3];
    int row = 4;
    int col = 3;

    // input.........
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> Imatrix[i][j];
        }

        cout << " " << endl;
    }

    // output.....................................

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << Imatrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}