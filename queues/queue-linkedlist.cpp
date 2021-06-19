#include <iostream>
using namespace std;

class node
{

public:
    node *next;

    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{

    node *front;

    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {

        if (front == NULL and back == NULL)
        {
            node *n = new node(val);

            back = n;
            front = n;
            return;
        }
        node *n = new node(val);
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "queue underflow" << endl;
            return;
        }

        node *todelete = front;

        front = front->next;
        delete todelete;
    }

    void peek()
    {
        cout << front->data << endl;
        return;
    }
};

int main()
{
    queue q;
    q.push(9);
    q.push(8);
    q.push(5);
    q.push(2);
    q.push(1);

    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
}