#include <iostream>
#include <string>
using namespace std;

// void function()
// {
//     static int x = 0;
//     cout << "x : " << x << endl;
//     x++;
// }

class ABC
{
public:
    ABC()
    {
        cout << "constructor\n";
    }
    ~ABC()
    {
        cout << "destructor\n";
    }
};

int main()
{
    // function();
    // function();
    // function();
    // function();

    if (true)
    {
        static ABC obj;
    }
    cout << "end of the main function\n";
    return 0;
}