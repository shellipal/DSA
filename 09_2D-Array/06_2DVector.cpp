#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5, 6, 10, 11}, // dynamic size..............
                               {7, 8, 9}};
    // cout << mat[0][2] << endl;

    // rows = mat.size();
    // cols = mat[1].size();

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[1].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}