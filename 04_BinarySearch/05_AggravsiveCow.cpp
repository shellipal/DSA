#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<int> &arr, int N, int C, int minAllowedDist)
{
    int cow = 1, laststallPos = arr[0];

    for (int i = 1; i < N; i++)
    {
        if (arr[i] - laststallPos >= minAllowedDist)
        {
            cow++;
            laststallPos = arr[i];
        }

        if (cow == C)
        {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C)
{
    sort(arr.begin(), arr.end());

    int start = 1, end = arr[N - 1] - arr[0], ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (ispossible(arr, N, C, mid)) // right
        {
            ans = mid;
            start = mid + 1;
        }
        else // left
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int N = 5, C = 2;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}