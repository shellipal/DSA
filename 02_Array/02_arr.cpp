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
int main()
{
    int arr[5] = {2, 5, 8, 77, 54};
    int size = 5;
    int target = 5;

    cout << LinearSearch(arr, size, target) << endl;
}
