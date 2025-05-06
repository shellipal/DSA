#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int a = 55;
    int *ptr = &a;

    int **pptr = &ptr;

    // float price = 22.5f;
    // float *ptr = &price;

    // int a = 10;
    // int *ptr = &a;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << *(&ptr) << endl;

    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << pptr << endl;

    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;

    // cout << &price << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
}