#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> Dq = {1, 2, 3, 4, 5};

    for (int val : Dq)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << Dq[3] << endl;
    return 0;
}