#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &vec, int target)
{

    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = {2, 3, 4, 5, 6, 7, 8, 9, 11, 12};
    int target = 8;

    int index = linearSearch(numbers, target);

    if (index != -1)
    {
        cout << "Element : " << target << " found at index : " << index << endl;
    }
    else
    {
        cout << "Element : " << target << " not found in the vector " << endl;
    }

    return 0;
}
