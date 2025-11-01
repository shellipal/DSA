#include <iostream>
#include <vector>
#include <string>
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

void helper(Node *root, string path, vector<string> &ans)
{
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(path);
    }

    if (root->left)
    {
        helper(root->left, path + "->" + to_string(root->left->data), ans);
    }
    if (root->right)
    {
        helper(root->right, path + "->" + to_string(root->right->data), ans);
    }
}

vector<string> binaryTreePath(Node *root)
{
    vector<string> ans;
    string path = to_string(root->data);

    helper(root, path, ans);
    return ans;
}

int main()
{
}