#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;

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
        }
    }
    // left half......
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    // right half....
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // copy the entire temp....

    for (int index = 0; index < temp.size(); index++)
    {
        arr[index + start] = temp[index];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        // left....
        mergeSort(arr, start, mid);
        // right....
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32};

    mergeSort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}