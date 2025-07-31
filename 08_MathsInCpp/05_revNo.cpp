#include <iostream>
using namespace std;
#include <math.h>

int reverseNo(int n)
{
    int reverseNum = 0;
    while (n != 0)
    {
        int dig = n % 10;

        if (reverseNum > INT_MAX / 10 || reverseNum < INT_MIN / 10)
        {
            return 0;
        }
        reverseNum = (reverseNum * 10) + dig;

        n = n / 10;
    }

    return reverseNum;
}

int main()
{
    int n = 2345;
    cout << reverseNo(n) << endl;
    return 0;
}