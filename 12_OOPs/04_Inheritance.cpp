#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    Person()
    {
        cout << "Parent Constructor....\n";
    }
};

class Student : public Person
{
public:
    int rollno;

    Student()
    {
        cout << "Child Constructor....\n";
    }
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Rollno : " << rollno << endl;
    }
};

int main()
{
    Student S1;
    S1.name = "Shelli Pal";
    S1.age = 20;
    S1.rollno = 1234;

    S1.getInfo();
    return 0;
}