#include <iostream>
using namespace std;

// bool
pair<int, int> LinearSearch(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int rows = 3;
    int cols = 3;
    int key = 8;

    pair<int, int> result = LinearSearch(matrix, rows, cols, key);

    if (result.first != -1)
    {
        cout << "Key found at Row: " << "{" << result.first << "," << result.second << "}" << endl;
    }
    else
    {
        cout << "key not found" << " {-1,-1}" << endl;
    }

    return 0;
}