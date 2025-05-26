#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndx])
            {
                smallestIndx = j;
            }
        }
        swap(arr[i], arr[smallestIndx]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }

    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}