#include <iostream>
using namespace std;
#include <math.h>

// Euclid's Algorithm......for solving gcd problem..........

int GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == b)
        return b;
    return a;
}

// using recursion.............................................................................

int gcdrec(int a, int b)
{
    if (b == 0)
        return a;

    return gcdrec(b, a % b);
}

int main()
{
    cout << GCD(20, 28) << endl;
    cout << gcdrec(20, 28) << endl;
    return 0;
}