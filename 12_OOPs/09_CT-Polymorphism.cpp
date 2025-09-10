#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "int :" << x << endl;
    }
    void show(char ch)
    {
        cout << "char :" << ch << endl;
    }
    void show(string str)
    {
        cout << "String :" << str << endl;
    }
};

int main()
{
    Print p1;
    // p1.show(200);
    p1.show("shelli");

    return 0;
}