#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TA : public Student,
           public Teacher
{
};

int main()
{
    TA t1;
    t1.name = "Shelli pal";
    t1.subject = "Computer Science";

    cout << t1.name << endl;
    cout << t1.subject << endl;
    return 0;
}