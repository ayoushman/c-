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

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << "->";
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "NULL" << endl;
    }
}

Node *reverseKNodes(Node *&head, int k)
{
    Node *prevptr = NULL;
    Node *currptr = head;

    Node *nextptr;

    int count = 0;

    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseKNodes(nextptr, k);
    }
    return prevptr;
}

// Detection and removal of cycle in linked list

bool detectCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast->next != NULL && fast != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removecycle(Node *&head)
{

    Node *slow = head;
    Node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    while (slow != fast);

    fast = head;

    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow = slow->next;
}

// even after  odd

Node* evenAfterOdd(Node *&head)
{
    Node *odd = head;
    Node *even = head->next;
    Node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;

    if (odd->next != NULL)
    {
        even->next = NULL;
    }

    return head ;
}

int main()
{

    Node *head = NULL;

    insertAtHead(head, 9);
    insertAtHead(head, 4);
    insertAtHead(head, 53);
    insertAtHead(head, 6);
    insertAtHead(head, 1);
    insertAtHead(head, 5);
    display(head);
    Node *newhead = reverseKNodes(head, 2);
    display(newhead);
    Node* evenhead = evenAfterOdd(head);
    display(evenhead);
}