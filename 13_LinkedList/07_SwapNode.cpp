#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class SwapNode
{
    // Node *head;
    // Node *tail;

public:
    // SwapNode()
    // {
    //     head = tail = NULL;
    // }

    Node *SwapPairs(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *first = head;
        Node *Second = head->next;
        Node *Prev = NULL;

        while (first != NULL && Second != NULL)
        {
            Node *third = Second->next;

            Second->next = first;
            first->next = third;

            if (Prev != NULL)
            {
                Prev->next = Second;
            }
            else
            {
                head = Second;
            }

            // Updation.....

            Prev = first;
            first = third;
            if (third != NULL)
            {
                Second = third->next;
            }
            else
            {
                Second = NULL;
            }
        }
        return head;
    }
};