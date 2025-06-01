#include <iostream>
#include <list>
using namespace std;

int main()
{
    // list<int> Li;
    list<int> Li = {1, 2, 3, 4, 5};

    // Li.emplace_back(3);
    // Li.push_back(4);
    // Li.push_front(2);
    // Li.push_front(1);

    // Li.pop_back();
    // Li.pop_front();

    for (int val : Li)
    {
        cout << val << " ";
    }
    cout << endl;
}