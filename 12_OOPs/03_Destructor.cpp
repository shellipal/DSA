#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Destructor....
    ~student()
    {
        cout << "Hii There, i'am deleting Everything...\n";
        delete cgpaPtr;
    };

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Shelli Pal", 8.9);
    s1.getInfo();
    return 0;
}