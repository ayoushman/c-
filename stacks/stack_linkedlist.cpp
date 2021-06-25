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

class stack
{

    Node *top = NULL;

public:
    stack()
    {
        top = NULL;
    }
    void push(int val)
    {
        Node *n = new Node(val);
        if (top == NULL)
        {
            top = n;
        }

        n->next = top;
        top = n;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Underflow condition" << endl;

            return;
        }

        top = top->next;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "No elements yet" << endl;
            return;
        }

        cout << top->data << endl;
    }
};

int main()
{
    stack st;

    st.push(4);
    st.push(5);
    st.push(1);
    st.push(10);
    st.push(11);
    st.pop();

    st.peek();
    st.pop();
    st.peek();
}
