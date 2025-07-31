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

bool palindrome(int n)
{
    if (n < 0)
    {
        return false;
    }
    else
    {
        int revNum = reverseNo(n);
        return n == revNum;
    }
}
int main()
{
    int n = 3553;
    cout << palindrome(n) << endl;
    return 0;
}