#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());

    return s == s2;
}

void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(partitions);
        return;
    }

    // sliceing the string.....,,
    for (int i = 0; i < s.size(); i++)
    {
        string part = s.substr(0, i + 1);

        if (isPalindrome(part))
        {
            partitions.push_back(part);
            getAllParts(s.substr(i + 1), partitions, ans);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s, partitions, ans);
    return ans;
}

int main()
{
    string s = "aab";
    vector<vector<string>> result = partition(s);

    cout << "Palindrome Parts are :\n";

    for (auto &value : result)
    {
        for (string val : value)
        {
            cout << val << endl;
        }
    }
    return 0;
}