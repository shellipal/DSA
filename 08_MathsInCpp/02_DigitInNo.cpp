#include <iostream>
using namespace std;
#include <math.h>

void printdigit(int n)
{
    int count = 0;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        count++;
        sum = sum + digit; // sum+=digit

        n = n / 10;
    }
    cout << "count of digits : " << count << endl;
    cout << "Sum of digits : " << sum << endl;
}

int main()
{
    int n = 3468;

    printdigit(n);

    cout << (int)(log10(n) + 1) << endl;
    return 0;
}