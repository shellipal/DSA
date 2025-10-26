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

void kthLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }

    kthLevel(root->left, k - 1);
    kthLevel(root->right, k - 1);
}

int main()
{
    vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);

    kthLevel(root, 2);
    return 0;
}