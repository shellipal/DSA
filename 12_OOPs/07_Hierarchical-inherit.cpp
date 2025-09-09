#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : virtual public Person
{
public:
    int rollno;
};

class Teacher : virtual public Person
{
public:
    string subject;
};

class TA : public Student, public Teacher
{
};

int main()
{
    TA t1;
    t1.name = "Shelli pal";
    t1.rollno = 21;
    t1.subject = "History";

    cout << t1.name << endl;
    cout << t1.rollno << endl;
    cout << t1.subject << endl;
}