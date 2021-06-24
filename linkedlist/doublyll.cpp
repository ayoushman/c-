#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAthead(Node *&head, int val)
{
    // Node *newNode = new Node(val);

    if (head == NULL)
    {
        Node *n = new Node(val);

        head = n;
    }

    Node *n = new Node(val);
    head->prev = n;

    n->next = head;
    head = n;
}

void insetAtTail(Node *&head, int val)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *n = new Node(val);
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}

void insertAtPos(Node *&head, int val, int pos)
{
    Node *temp = head;

    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *n = new Node(val);

    n->next = temp->next;

    temp->next = n;
    n->prev = temp;
}

void display(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    insertAthead(head, 3);
    insertAthead(head, 1);
    insertAthead(head, 6);
    insetAtTail(head, 9);
    insetAtTail(head, 12);
cout<<"checking";
    insetAtTail(head, 11);
    insertAtPos(head, 4, 3);
    insertAtPos(head, 4, 6);
    display(head);
}