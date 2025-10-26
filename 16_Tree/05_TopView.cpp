#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

static int index = -1;
Node *buildTree(vector<int> preorder)
{
    index++;

    if (preorder[index] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Top view of binary Tree............
void topView(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> m; // <HD-horizontal distance , node value>
    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *current = q.front().first;
        int currentHD = q.front().second;
        q.pop();

        if (m.find(currentHD) == m.end())
        {
            m[currentHD] = current->data;
        }

        if (current->left != NULL)
        {
            q.push({current->left, currentHD - 1});
        }
        if (current->right != NULL)
        {
            q.push({current->right, currentHD + 1});
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);

    topView(root);
    return 0;
}