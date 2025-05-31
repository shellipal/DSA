#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec1(5, 10);

    vector<int> vec = {1, 2, 3, 4, 5};

    // vec.erase(vec.begin() + 1);
    // vec.erase(vec.begin() - 1);
    // vector<int> vec2(vec1);

    // vec.insert(vec.begin() + 2, 100);

    // vec.clear();
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);

    // vec.pop_back();

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // cout << vec.empty() << endl;

    // cout << *(vec.begin()) << endl;
    // cout << *(vec.end()) << endl;

    // cout << "vec at indx 4 : " << vec[4] << " or " << vec.at(4) << endl;

    // cout << "Front Element: " << vec.front() << endl;
    // cout << "Back Element: " << vec.back() << endl;

    // iterators..............................

    vector<int>::iterator IT;
    for (IT = vec.begin(); IT != vec.end(); IT++)
    {
        cout << *(IT) << " ";
    }

    cout << endl;

    for (auto IT = vec.rbegin(); IT != vec.rend(); IT++)
    {
        cout << *(IT) << " ";
    }
    cout << endl;

    return 0;
}