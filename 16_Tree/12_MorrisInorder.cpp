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

vector<int> inorderTraversal(Node *root)
{
    vector<int> ans;
    Node *current = root;

    while (current != NULL)
    {
        if (current->left == NULL)
        {
            ans.push_back(current->data);
            current = current->right;
        }
        else
        {
            // find the inorder procceder..........
            Node *Ip = current->left;
            while (Ip->right != NULL && Ip->right != current)
            {
                Ip = Ip->right;
            }

            if (Ip->right == NULL)
            {
                Ip->right = current; // create onnection...
                current = current->left;
            }
            else
            {
                Ip->right = NULL; // delete......
                ans.push_back(current->data);
                current = current->right;
            }
        }
    }
    return ans;
}
int main()
{
}