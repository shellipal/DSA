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

static int index = -1;
Node *BuildTree(vector<int> preorder)
{
    index++;

    if (preorder[index] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[index]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;
}

// height of the tree...........
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1;
}

int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = BuildTree(preorder);

    cout << "Height : " << height(root) << endl;
    return 0;
}