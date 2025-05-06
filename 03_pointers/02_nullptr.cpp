#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int **ptr = NULL;

    // cout << ptr << endl;

    //.............question..................................

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;
    return 0;
}