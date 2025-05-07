#include <iostream>
#include <vector>
using namespace std;

void changeA(int *ptr) // pass by reference using pointer....................
{
    *ptr = 20;
}

void changeB(int &b) // pass by reference using alias.............
{
    b = 30;
}

int main()
{
    int a = 10;
    // changeA(&a);

    changeB(a);

    cout << "inside main function : " << a << endl;
    return 0;
}