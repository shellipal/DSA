#include <iostream>
#include <vector>
using namespace std;

void Print_All_Subsets(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include...............
    ans.push_back(arr[i]);
    Print_All_Subsets(arr, ans, i + 1);

    ans.pop_back(); // backtracing.....
    // exclude...............
    Print_All_Subsets(arr, ans, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // for storing subsets.

    Print_All_Subsets(arr, ans, 0);
    return 0;
}
