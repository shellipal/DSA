#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int col = 3;

    cout << matrix[1][1] << endl;

    matrix[1][1] = 15;

    cout << matrix[1][1] << endl;
    return 0;
}