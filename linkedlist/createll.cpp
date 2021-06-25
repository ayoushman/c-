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


void insertAtHead(Node * & head , int val){
  
  Node  * n = new Node(val);
  
    if(head==NULL){
        head = n ;
        return;
    }


    n->next = head;
    head = n;
}


void inserAfterPos(Node * & head , int val , int pos){

    Node * n = new Node(val);

    int currnt  = 0 ; 

    Node * temp  = head ; 

while(currnt<=pos){
    temp =  temp->next;
    currnt++;
}

n->next = temp->next;
temp->next = n ;

}

int main()
{
    Node *head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 7);
    insertAtTail(head, 1);
    insertAtTail(head, 9);
    // inserAfterPos(head , 11 , 4);
    display(head);
}
