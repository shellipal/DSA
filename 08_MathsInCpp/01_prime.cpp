#include <iostream>
using namespace std;
#include <math.h>

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (2 % i == 0)
        {
            return "not prime";
        }
    }
    return "prime";
}

int main()
{
    int n = 47;

    cout << isPrime(n) << endl;
    return 0;
}