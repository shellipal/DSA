#include <iostream>
#include <string>
using namespace std;

class Shape // Abstract class.....because of pure virtual function....
{
public:
    virtual void drow() = 0;
};

class Circle : public Shape
{
public:
    void drow()
    {
        cout << "Drowing a circle\n";
    }
};
int main()
{
    Circle c1;
    c1.drow();

    return 0;
}