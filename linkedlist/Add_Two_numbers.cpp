#include <iostream>
#include <math.h>
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

Node *reverseList(Node *head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;

        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

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
int getCount(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

long makeNumber(Node *head1)
{
    Node *temp1 = head1;
   long size = getCount(temp1);
   cout<<size<<"Here size"<<endl;
    long t = pow(10, size);
    cout<<t<<"Here t "<<endl;
   long number = 0;
    while (temp1 != NULL)
    {
        t = t / 10;
        number = number + temp1->data * t;

        temp1 = temp1->next;
    }

    return number;
}

Node *numbertoll(long n)
{
    Node *newHead = NULL;
    if (n == 0)
    {
        insertAtTail(newHead, n);
    }
    while (n > 0)
    {
        int digit = n % 10;
        insertAtTail(newHead, digit);
        n = n / 10;
    }

    return newHead;
}
void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// This approach was good but it did not work on big numbers


Node *AddTwoList(Node *head1, Node *head2)
{
      Node* ans = new Node(0);
        
        Node * p = head1 , *q =head2 , *curr = ans;
        
        int carry = 0;
     while(p!=NULL || q!=NULL ) {
        int x = (p!=NULL)? p->data : 0;
           int y = (q!=NULL)? q->data : 0;
        int sum =carry+x+y;
        carry = sum/10;
        curr->next = new Node(sum%10);
        curr = curr->next;
        if(p!=NULL){
            p = p->next;
        }
        if(q!=NULL){      
            q = q->next;
        }
        
        if(carry>0){
            curr->next = new Node(carry);
           
        }
        
    }    
    return ans->next;
    }




int main()
{
    Node *head = NULL;
    Node *head1 = NULL;

    insertAtTail(head, 9);
    // insertAtTail(head, 4);
    // insertAtTail(head, 3);

    insertAtTail(head1, 1);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);
    insertAtTail(head1, 9);

    // insertAtTail(head1, 6);
    // insertAtTail(head1, 4);
    display(head);
    display(head1);
  
    // Node *final = AddTwoList(head, head1);
    // display(final);
    // Node *newHead = reverseList(head);
    // Node *newHead1 = reverseList(head1);
    // display(newHead);
    // cout << endl;
    // display(newHead1);
    // cout << endl;
    // int b = makeNumber(newHead);
    // int c = makeNumber(newHead1);
    // cout << b << endl;
    // cout << c << endl;

    // int d = b + c;
    // cout << d << endl;

    // Node *finalHead = numbertoll(d);
    // display(finalHead);
}