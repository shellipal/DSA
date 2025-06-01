#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<pair<int, int>> p;
    vector<pair<int, int>> p{{1, 2}, {2, 3}, {3, 4}, {4, 5}};

    p.push_back({5, 6});
    p.emplace_back(6, 7);

    for (pair<int, int> p : p) // we can also use (auto)in the place of pair<int, int> p............
    {
        cout << p.first << " " << p.second << endl;
    }

    // pair<int, int> p1 = {1, 5};
    // pair<char, int> p1 = {'s', 5};
    pair<char, string>
        p1 = {'s', "shelli"};

    // cout << p1.first << endl;
    // cout << p1.second << endl;

    return 0;
}