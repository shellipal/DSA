#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;

    // first window....
    for (int i = 0; i < k; i++)
    {
        while (dq.size() > 0 && nums[dq.back()] <= nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < nums.size(); i++)
    {
        ans.push_back(nums[dq.front()]);

        // remove those elements which are not a part of current window........

        while (dq.size() > 0 && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // remove smaller values from the end........
        while (dq.size() > 0 && nums[dq.back()] <= nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}

int main()
{
}