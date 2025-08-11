#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> Two_Sum(vector<int> &arr, int target)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int First = arr[i];
        int Second = target - First;

        if (m.find(Second) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[Second]);
            break;
        }
        m[First] = i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    vector<int> result = Two_Sum(arr, 9);

    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}