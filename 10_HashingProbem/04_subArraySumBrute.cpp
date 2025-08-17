#include <iostream>
#include <vector>
using namespace std;

int SubArraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j]; // sum=sum+nums[j]
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    cout << SubArraySum(nums, 33) << endl;
    return 0;
}