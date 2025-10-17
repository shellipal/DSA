#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int totalGas = 0;
    int totalCost = 0;

    // for (int val : gas)
    // {
    //     totalGas = totalGas + val;
    // }

    // for (int val : cost)
    // {
    //     totalCost = totalCost + val;
    // }

    // unique solution always exists........
    int start = 0;
    int currentGas = 0;

    for (int i = 0; i < gas.size(); i++)
    {
        totalGas = totalGas + gas[i];
        totalCost = totalCost + cost[i];

        currentGas = currentGas + (gas[i] - cost[i]);

        if (currentGas < 0)
        {
            start = i + 1;
            currentGas = 0;
        }
    }

    return totalGas < totalCost ? -1 : start;

    //  if (totalGas < totalCost)
    // {
    //     return -1;
    // }
    // return start;
}

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int ans = canCompleteCircuit(gas, cost);
    cout << ans << endl;
    return 0;
}