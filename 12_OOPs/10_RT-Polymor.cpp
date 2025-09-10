#include <iostream>
#include <string>
using namespace std;

class Parents
{
public:
    void getInfo()
    {
        cout << "parent class\n";
    }

    virtual void hello()
    {
        cout << "Hello from parent\n";
    }
};

class Child
{
public:
    void getInfo()
    {
        cout << "Child class\n";
    }

    void hello()
    {
        cout << "Hello from Child\n";
    }
};

int main()
{
    Child c1;
    // c1.getInfo();
    c1.hello();

    Parents p1;
    p1.getInfo();
    p1.hello();

    return 0;
}