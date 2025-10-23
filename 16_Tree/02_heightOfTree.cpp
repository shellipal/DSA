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

// count Node..........
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount + rightCount + 1;
}

// sum of nodes............
int sumOfNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftsum = sumOfNodes(root->left);
    int rightsum = sumOfNodes(root->right);
    return leftsum + rightsum + root->data;
}

int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = BuildTree(preorder);

    cout << "Height : " << height(root) << endl;
    cout << "Count : " << count(root) << endl;
    cout << "Sum of Nodes : " << sumOfNodes(root) << endl;
    return 0;
}