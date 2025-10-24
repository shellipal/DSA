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

int ans = 0;
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);

    ans = max(ans, leftht + rightht);

    return max(leftht, rightht) + 1;
}

int diameterOfBinaryTree(Node *root)
{
    // if (root == NULL)
    // {
    //     return 0;
    // }

    // int leftDia = diameterOfBinaryTree(root->left);
    // int rightDia = diameterOfBinaryTree(root->right);
    // int currentDia = height(root->left) + height(root->right);

    // return max(leftDia, max(rightDia, currentDia));

    height(root);
    return ans;
}

int main()
{
}