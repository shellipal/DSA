#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int widthOfBinaryTree(Node *root)
{
    queue<pair<Node *, unsigned long long>> q;
    q.push({root, 0});
    int maxWidth = 0;

    while (q.size() > 0)
    {
        int currentLevelSize = q.size();
        unsigned long long startIndex = q.front().second;
        unsigned long long endIndex = q.back().second;

        maxWidth = max(maxWidth, (int)(endIndex - startIndex + 1));

        for (int i = 0; i < currentLevelSize; i++)
        {
            auto current = q.front();
            q.pop();

            if (current.first->left)
            {
                q.push({current.first->left, current.second * 2 + 1});
            }
            if (current.first->right)
            {
                q.push({current.first->right, current.second * 2 + 2});
            }
        }
    }
    return maxWidth;
}

int main()
{
}