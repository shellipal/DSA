#include <iostream>
#include <vector>
using namespace std;

// 2-Sum -> input array sorted.....

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int sum = nums[start] + nums[end];

        if (sum == target)
        {
            return {start + 1, end + 1};
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = twoSum(nums, 9);

    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}