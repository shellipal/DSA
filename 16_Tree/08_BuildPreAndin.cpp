#include <iostream>
#include <vector>
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

int search(vector<int> &inorder, int left, int right, int val)
{
    for (int i = left; i <= right; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(vector<int> &preorder, vector<int> &inorder, int &preIndex, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }

    // int preIndex = 0;
    Node *root = new Node(preorder[preIndex]);

    int inorderIndex = search(inorder, left, right, preorder[preIndex]);
    preIndex++;

    root->left = buildTree(preorder, inorder, preIndex, left, inorderIndex - 1);
    root->right = buildTree(preorder, inorder, preIndex, inorderIndex + 1, right);

    return root;
}

int main()
{
    int preIndex = 0;
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Node *result = buildTree(preorder, inorder, preIndex, 0, inorder.size() - 1);
    cout << "Root of the tree : " << result->data << endl;

    return 0;
}