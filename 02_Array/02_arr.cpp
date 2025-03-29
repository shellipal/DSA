#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// int main()
// {
//     int arr[5] = {2, 5, 8, 77, 54};
//     int size = 5;
//     int target = 5;

//     cout << LinearSearch(arr, size, target) << endl;
// }

void ReverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;

    // int arr[5] = {2, 5, 8, 77, 54};
    // int size = 5;
    int target = 12;

    cout << LinearSearch(arr, size, target) << endl;
    ReverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
