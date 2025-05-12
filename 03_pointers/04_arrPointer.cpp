#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};

    // cout << arr << endl;
    // cout << *arr << endl;

    // int a = 10;
    // int *ptr = &a;

    // cout << ptr << endl;
    // ptr = ptr + 2;
    // ptr = ptr - 2;
    // cout << ptr << endl;

    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;
    // cout << *(arr + 4) << endl;

    // int *ptr2;
    // int *ptr1 = ptr2 + 4;

    // cout << ptr1 - ptr2 << endl;

    //.....................question.......................

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;

    return 0;
}