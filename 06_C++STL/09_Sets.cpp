#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    // set<int> s;

    // multiset<int> s;

    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(4);
    s.insert(5);

    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "size : " << s.size() << endl;
    // cout << "lower bound is : " << *(s.lower_bound(4)) << endl;
    // cout << "upper bound is : " << *(s.upper_bound(4)) << endl;
}