#include <iostream>
using namespace std;


// function for reference..................................
void changeArr(int arr[], int size)
{
    cout << "in functions\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}


int main()
{
    // int marks[5] = {99, 100, 54, 36, 88};

    // double price[] = {99.98, 105.27, 30.00};
    // marks[1] = 98;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // cout << sizeof(marks) / sizeof(int) << endl;

    //..........loops : 0 to size-1.....................
    // int size = 5;
    // int marks[size];

    // for (int i = 0; i <= size - 1; i++)
    // {
    //     cin >> marks[i];
    //     cout << endl;
    // }

    // for (int i = 0; i <= size - 1; i++)
    // {

    //     cout << " " << marks[i] << endl;
    // }

    // .....................Problem...................................

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int index;
    int index1;

    // min  and max no........................
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        if (smallest == nums[i])
        {
            index = i;
        }

        largest = max(nums[i], largest);
        if (largest == nums[i])
        {
            index1 = i;
        }
    }

    cout << "smallest no. index : " << index << endl;
    cout << "largest no. index : " << index1 << endl;

    // ...............pass by reference........................................................

    int arr[] = {1, 2, 3};
    changeArr(arr, 3);
    cout << "in main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
