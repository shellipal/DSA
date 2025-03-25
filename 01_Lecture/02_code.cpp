// find weather the number is pow of 2 ar not ?.............................

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n = 32;
    cout << (isPowerOfTwo(n) ? "Yes" : "No") << endl;
}
