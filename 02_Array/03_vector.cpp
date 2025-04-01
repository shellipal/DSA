#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(5, 0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    vector<int> vec;

    vec.push_back(22);
    vec.push_back(33);
    vec.push_back(44);
    vec.push_back(42);
    vec.push_back(47);

    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;
    // cout << "After push back size : " << vec.size() << endl;

    // vec.pop_back();

    // cout << "After pop back size : " << vec.size() << endl;

    // for (int i : vec) // for each loop.........
    // {
    //     cout << i << endl;
    // }

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // cout << vec.at(0) << endl;
    // return 0;
}
