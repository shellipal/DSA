#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, Time = 0;

    for (int i = 0; i < n; i++)
    {
        if (Time + arr[i] <= maxAllowedTime)
        {
            Time = Time + arr[i];
        }
        else
        {
            painters++;
            Time = arr[i];
        }
    }

    return painters <= m;
}

int minTimeTOPaint(vector<int> &arr, int n, int m)
{
    int sum = 0, maxvalue = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxvalue = max(maxvalue, arr[i]);
    }
    int start = maxvalue, end = sum, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeTOPaint(arr, n, m) << endl;
    return 0;
}