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

bool isSameTree(Node *p, Node *q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }

    bool isLeftSame = isSameTree(p->left, q->left);
    bool isRightSame = isSameTree(p->right, q->right);

    return isLeftSame && isRightSame && p->data == q->data;
}

bool isSubTree(Node *root, Node *subroot)
{
    if (root == NULL || subroot == NULL)
    {
        return root == subroot;
    }

    if (root->data == subroot->data && isSameTree(root, subroot))
    {
        return true;
    }

    return isSubTree(root->left, subroot) || isSubTree(root->right, subroot);
}

int main()
{
}