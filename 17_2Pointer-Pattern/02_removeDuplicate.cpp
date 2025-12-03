#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int officer = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            officer++;
            nums[officer] = nums[i];
        }
    }
    return officer + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 6};
    cout << removeDuplicate(nums) << endl;
    return 0;
}