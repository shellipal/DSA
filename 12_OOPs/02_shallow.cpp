#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    // double cgpa;
    double *cgpaPtr;

    // constructor....
    Student(string name, double cgpa)
    {
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Cgpa : " << *cgpaPtr << endl;
    }
};

int main()
{
    Student S1("Shelli Pal", 8.9);
    Student S2(S1);

    S1.getInfo();
    *(S2.cgpaPtr) = 9.2;
    S1.getInfo();

    S2.name = "Neha";
    S2.getInfo();
    return 0;
}