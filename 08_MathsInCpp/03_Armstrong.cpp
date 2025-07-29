#include <iostream>
using namespace std;
#include <math.h>

bool isArmstrong(int n)
{
    int copyN = n;
    int sumOfDigit = 0;

    while (n != 0)
    {
        int Digit = n % 10;
        sumOfDigit += (Digit * Digit * Digit);

        n = n / 10;
    }
    return sumOfDigit == copyN;
}

int main()
{
    int n = 150;

    if (isArmstrong(n))
    {
        cout << "is Armstrong number\n"
             << endl;
    }
    else
    {
        cout << "NOT a Armstrong number\n"
             << endl;
    }
}