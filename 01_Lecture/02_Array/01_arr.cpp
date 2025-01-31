#include <iostream>
using namespace std;

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
    int size = 5;
    int marks[size];

    for (int i = 0; i <= size - 1; i++)
    {
        cin >> marks[i];
        cout << endl;
    }

    for (int i = 0; i <= size - 1; i++)
    {

        cout << " " << marks[i] << endl;
    }
    return 0;
}

// .........................problem..............................
