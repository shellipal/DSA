#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // Default constructor
    Node()
    {
        val = 0;
        next = NULL;
    }

    // Constructor with only value
    Node(int x)
    {
        val = x;
        next = NULL;
    }

    // Constructor with value + next pointer
    Node(int x, Node *nextNode)
    {
        val = x;
        next = nextNode;
    }
};

class Solution
{
public:
    Node *reverseKGroup(Node *head, int k)
    {
        Node *temp = head;
        int count = 0;
        // check k nodes exist ? //////
        while (count < k)
        {
            if (temp == NULL)
            {
                return head;
            }
            temp = temp->next;
            count++;
        }
        // recursively call for rest of the LL ......

        Node *prevNode = reverseKGroup(temp, k);

        // reverse current group......

        temp = head;
        count = 0;
        while (count < k)
        {
            Node *next = temp->next;
            temp->next = prevNode;

            prevNode = temp;
            temp = next;

            count++;
        }
        return prevNode;
    }
};
