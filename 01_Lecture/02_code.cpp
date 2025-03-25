// find weather the number is pow of 2 ar not ?.............................

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

// int main()
// {
//     int n = 32;
//     cout << (isPowerOfTwo(n) ? "Yes" : "No") << endl;
// }

//  WAF to  reverse an integer n.................................

// #include <iostream>
// using namespace std;

int reverseInteger(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10; // Get the last digit
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
        {
            // Handling overflow cases
            return 0;
        }
        reversed = reversed * 10 + digit; // Append the digit
        n /= 10;                          // Remove the last digit from n
    }

    return reversed;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Reversed: " << reverseInteger(n) << endl;
}
