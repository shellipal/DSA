#include <iostream>
#include <string>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    // properties / attributes...
    string name;
    string dept;
    string subject;

    // methods...
    void changeDept(string newdept)
    {
        dept = newdept;
    }

    // constructor.....
    // non-perameterized....
    Teacher()
    {
        dept = "Computer Science";
    }
    // perameterized...
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor......
    Teacher(Teacher &orgObj)
    {
        cout << "This is custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }

    /*
        // setter...
        void setSalary(double s)
        {
            salary = s;
        }
        // getter...
        double getSalary()
        {
            return salary;
        }
    */
    /*
    class Account
    {
    private:
        double balance;
        int password; // data Hiding...

    public:
        string username;
        int accountID;
    };
    */
};

int main()
{
    Teacher t1("shelli", "computerScience", "c++", 25000);

    // t1.name = "Shelli";
    // // t1.dept = "CS";
    // t1.subject = "C++";
    // t1.setSalary(25000);

    // cout << t1.name << endl;
    // cout << t1.getSalary() << endl;
    // cout << t1.dept << endl;

    // t1.getInfo();

    Teacher t2(t1); // custom copy constructor -invoke...
    t2.getInfo();
    return 0;
}