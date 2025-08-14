#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

set<vector<int>> s;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());

                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1};
    vector<vector<int>> result = threeSum(nums);

    for (auto &trip : result)
    {
        for (int num : trip)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}