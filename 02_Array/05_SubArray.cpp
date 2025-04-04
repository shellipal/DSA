#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};

    // for (int start = 0; start < size; start++)
    // {
    //     for (int end = start; end < size; end++)
    //     {
    //         for (int i = start; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    int maxSum = 0;
    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;
        for (int end = 0; end < size; end++)
        {
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "maximum Subarray Sum : " << maxSum << endl;

    return 0;
}
