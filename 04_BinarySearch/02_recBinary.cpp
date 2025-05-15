#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int start, int end)
{

    // int start = 0;
    // int end = arr.size() - 1;

    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (tar > arr[mid])
        {
            return recBinarySearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return recBinarySearch(arr, tar, start, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 5, 8, 12};
    int tar1 = 12;

    int size1 = arr1.size();
    int start1 = arr1[0];
    int end1 = arr1[size1 - 1];

    cout << recBinarySearch(arr1, tar1, start1, end1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 8, 12};
    int tar2 = 10;

    int size2 = arr2.size();
    int start2 = arr2[0];
    int end2 = arr2[size2 - 1];

    cout << recBinarySearch(arr2, tar2, start2, end2) << endl;
    return 0;
}