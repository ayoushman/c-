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

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int val)
{

    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

void inserAfterPos(Node *&head, int val, int pos)
{

    Node *n = new Node(val);

    int currnt = 0;

    Node *temp = head;

    while (currnt <= pos)
    {
        temp = temp->next;
        currnt++;
    }

    n->next = temp->next;
    temp->next = n;
}

// Merrge 2 sorted list

Node *mergell(Node *&head1, Node *&head2)
{
    Node *p1 = head1;
    Node *p2 = head2;

    Node *dummyNode = new Node(-1);
    Node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }

        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
}

// Rotate list

Node *rotateList(Node *head, int k)
{

    while (k > 0)
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp->next->next = head;
        head = temp->next;
        temp->next = NULL;
        k--;
    }

    return head;
}

int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    display(head);
    int k =2;
    Node* newhead = rotateList(head , k);
    cout<<endl;
    display(newhead);
    // insertAtTail(head1, 4);
    // insertAtTail(head1, 11);
    // insertAtTail(head1, 1);
    // insertAtTail(head1, 2);
    // insertAtTail(head1, 9);
    // // inserAfterPos(head , 11 , 4);
    // display(head);
    // cout << endl;
    // display(head1);
    // cout << endl;
    // Node *newNode = mergell(head, head1);

    // display(newNode);
}
