#include <iostream>
using namespace std;

class circularQueue
{
    int *arr;
    int currSize;
    int capacity;
    int frontIndex;
    int rearIndex;

public:
    circularQueue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = -1;
        currSize = 0;
    }

    void push(int data)
    {
        if (currSize == capacity)
        {
            cout << "CQ is full\n";
            return;
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = data;
        currSize++;
    }

    void pop()
    {
        if (empty())
        {
            cout << "CQ is empty\n";
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;
        currSize--;
    }

    int front()
    {
        if (empty())
        {
            cout << "CQ is empty\n";
            return -1;
        }
        return arr[frontIndex];
    }

    bool empty()
    {
        return currSize == 0;
    }

    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    circularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    // cq.print();

    while (!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    return 0;
}