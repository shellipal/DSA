#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    int invCount = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            invCount = invCount + (mid - i + 1); // invCount += (mid-i+1)
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // copy temp value in original array.......
    for (int index = start; index < temp.size(); index++)
    {
        arr[index + start] = temp[index];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        // lefthalf....
        int LeftinvCount = mergeSort(arr, start, mid);
        // righthalf....
        int RightinvCount = mergeSort(arr, mid + 1, end);

        int currInvCount = merge(arr, start, mid, end);

        return LeftinvCount + RightinvCount + currInvCount;
    }
    return 0;
}

int main()
{
    // vector<int> arr = {6, 3, 5, 2, 7};
    vector<int> arr = {1, 3, 5, 10, 2, 6, 8, 9};

    int ans = mergeSort(arr, 0, arr.size() - 1);
    cout << "Inversion Count : " << ans << endl;
    return 0;
}