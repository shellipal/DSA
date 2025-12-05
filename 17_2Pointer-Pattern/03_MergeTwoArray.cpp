#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> result;
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        result.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main()
{
    vector<int> arr1 = {2, 3, 4, 6};
    vector<int> arr2 = {1, 5, 7, 9};

    vector<int> ans = mergeTwoArray(arr1, arr2);

    for (int res : ans)
    {
        cout << res << " ";
    }
    cout << endl;
    return 0;
}