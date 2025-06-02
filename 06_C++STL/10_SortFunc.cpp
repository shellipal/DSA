#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // int arr[7] = {8, 3, 5, 7, 2, 9, 1};
    // vector<int> arr = {8, 3, 5, 7, 2, 9, 1};
    vector<pair<int, int>> arr = {{8, 3}, {5, 7}, {2, 9}};

    // sort(arr.begin(), arr.end());
    // sort(arr.begin(), arr.end(), comparator);

    reverse(vec.begin(), vec.end());

    for (auto val : vec)
    {
        cout << val << endl;
    }
    cout << endl;

    //...................................
    string s = "abc";
    string p = "bca";
    next_permutation(s.begin(), s.end());
    prev_permutation(p.begin(), p.end());
    cout << s << endl;
    cout << p << endl;

    return 0;
}