#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node *child;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};

class FlattenLL
{
    Node *head;
    Node *tail;

public:
    FlattenLL()
    {
        head = tail = NULL;
    }

    Node *Flatten(Node *head)
    {
        if (head == NULL)
        {
            return;
        }
        Node *current = head;

        while (current != NULL)
        {
            if (current->child != NULL)
            {
                // flatten the child node....
                Node *next = current->next;
                current->next = Flatten(current->child);
                current->next->prev = current;
                current->child = NULL;

                // finding tail......
                while (current->next != NULL)
                {
                    current = current->next;
                }

                // attach tail with next ptr....
                if (next != NULL)
                {
                    current->next = next;
                    next->prev = current;
                }
            }
            current = current->next;
        }
        return head;
    }
};