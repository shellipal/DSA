// square of a sorted array (problem)...............
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &a)
{
    int siz = a.size();
    vector<int> neg;
    vector<int> pos;
    // check positive or negative.
    for (int i = 0; i < siz; i++)
    {
        if (a[i] < 0)
            neg.push_back(a[i]);
        else
            pos.push_back(a[i]);
    }
    // no negative element
    if (neg.size() == 0)
    {
        for (int i = 0; i < pos.size(); i++)
            pos[i] = pos[i] * pos[i];
        return pos;
    }
    // no positibve
    if (pos.size() == 0)
    {
        for (int i = 0; i < neg.size(); i++)
            neg[i] = neg[i] * neg[i];
        reverse(neg.begin(), neg.end());
        return neg;
    }

    int i = 0, j = 0;
    int index = 0;
    int n = neg.size();
    int m = pos.size();
    vector<int> result(n + m);
    for (int i = 0; i < n; i++)
        neg[i] = neg[i] * neg[i];

    reverse(neg.begin(), neg.end());
    for (int i = 0; i < m; i++)
        pos[i] = pos[i] * pos[i];
    while (i < n and j < m)
    {
        if (neg[i] <= pos[j])
        {
            result[index] = neg[i];
            index++;
            i++;
        }
        else
        {
            result[index] = pos[j];
            index++;
            j++;
        }
    }
    // edge case.
    while (i < n)
    {
        result[index] = neg[i];
        index++;
        i++;
    }
    while (j < m)
    {
        result[index] = pos[j];
        index++;
        j++;
    }

    return result;
}

int main()
{
    // vector<int> arr = {-4, 0, 1, 2, 6};
    vector<int> arr = {-4, -1, 0, 3, 10};

    vector<int> ans = sortedSquares(arr);

    for (int res : ans)
    {
        cout << res << " ";
    }
    cout << endl;
    return 0;
}