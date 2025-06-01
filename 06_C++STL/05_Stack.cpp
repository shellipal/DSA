#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> s2;

    s2.swap(s);

    cout << "size of s : " << s.size() << endl;
    cout << "size of s2 : " << s2.size() << endl;

    // cout << "Top of stack : " << s.top() << endl;

    // while (!s.empty())
    // {
    //     cout << "top of stack : " << s.top() << " " << endl;
    //     s.pop();
    // }
    // cout << endl;

    return 0;
}