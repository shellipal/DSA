// lowest Common Ancestor..........
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

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == p->data || root->data == q->data)
    {
        return root;
    }

    Node *leftLCA = lowestCommonAncestor(root->left, p, q);
    Node *rightLCA = lowestCommonAncestor(root->right, p, q);

    if (leftLCA && rightLCA)
    {
        return root;
    }
    else if (leftLCA != NULL)
    {
        return leftLCA;
    }
    else
    {
        return rightLCA;
    }
}

int main()
{
}