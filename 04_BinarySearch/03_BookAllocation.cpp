#include <iostream>
#include <vector>
using namespace std;

int isvalid(vector<int> &arr, int n, int m, int maxAllowedpages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedpages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedpages)
        {
            pages = pages + arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int BookAllocation(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int ans = -1;
    int start = 0;
    int end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isvalid(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;

    cout << BookAllocation(arr, n, m) << endl;
    return 0;
}