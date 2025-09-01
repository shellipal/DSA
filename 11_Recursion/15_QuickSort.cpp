#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int index = start - 1;
    int pivit = arr[end];

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivit)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}

void QuickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivit = partition(arr, start, end);

        // left half.....
        QuickSort(arr, start, pivit - 1);
        // right half....
        QuickSort(arr, pivit + 1, end);
    }
}

int main()
{
    vector<int> arr = {12, 31, 32, 8, 35, 17};
    QuickSort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}