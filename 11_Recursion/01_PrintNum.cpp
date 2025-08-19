#include <iostream>
using namespace std;

void PrintNums(int n)
{
    if (n == 1)
    {
        cout << "1\n"
             << endl;
        return;
    }

    cout << n << " ";
    PrintNums(n - 1);
}

int main()
{
    PrintNums(100);
    return 0;
}