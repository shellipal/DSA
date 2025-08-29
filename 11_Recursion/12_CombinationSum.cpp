#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

set<vector<int>> s;
void getAllSum(vector<int> &arr, int target, int index, vector<vector<int>> &ans, vector<int> &combin)
{

    if (target == 0)
    {
        if (s.find(combin) == s.end())
        {
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }

    if (index == arr.size() || target < 0)
    {
        return;
    }

    combin.push_back(arr[index]);
    // single....
    getAllSum(arr, target - arr[index], index + 1, ans, combin);
    // multiple.....
    getAllSum(arr, target - arr[index], index, ans, combin);
    combin.pop_back();
    // exclusion....
    getAllSum(arr, target, index + 1, ans, combin);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;
    s.clear();

    getAllSum(arr, target, 0, ans, combin);

    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 5};
    vector<vector<int>> result = combinationSum(arr, 8);
    cout << "combinatins are:\n";

    for (auto &comb : result)
    {
        cout << "[ ";
        for (int val : comb)
        {
            cout << val;
        }
        cout << " ]\n"
             << endl;
    }

    return 0;
}