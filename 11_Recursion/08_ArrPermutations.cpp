#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void GetPermutation(vector<int> &nums, int index, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        GetPermutation(nums, index + 1, ans);

        // backtrack.....
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    GetPermutation(nums, 0, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> results = permute(nums);

    for (auto &permu : results)
    {
        for (int val : permu)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}