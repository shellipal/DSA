#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "Shelli";
    string str = "0987654321";

    reverse(str.begin(), str.end());

    cout << str << endl;
    return 0;
}