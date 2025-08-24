#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getpermutation(vector<char> &str, int index)
{
    if (index == str.size())
    {
        for (char val : str)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        getpermutation(str, index + 1);

        swap(str[index], str[i]);
    }
}

int main()
{
    string str = "abcd";
    vector<char> values(str.begin(), str.end());
    getpermutation(values, 0);
    return 0;
}