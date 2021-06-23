#include<iostream>
using namespace std ; 



class Node{
public:

int data ; 
Node * next ; 


Node(int val){
    data =  val ;
    next = NULL;
}


};

void insertAtTail(Node *&head, int val)
{
   

    if (head == NULL)
    { Node *n = new Node(val);
        head = n;
        return;
    }
     Node *n = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}


void insertAtHead(Node * & head , int val){
    Node * n = new Node(val);
    if(head==NULL){
        head =  n ;
        return;
    }
n->next = head;
n = head;

}

Node*  reverseList(Node * &head){
    Node* prevptr = NULL;
    Node* currptr =  head; 
    Node* nextptr ;

    while(currptr!=NULL){
        nextptr = currptr->next;

        currptr->next = prevptr;

        prevptr = currptr;
        currptr = currptr->next;
    }
    return prevptr;
}

void display(Node* head){
    Node * temp = head;


    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
Node * head  = NULL;

insertAtHead( head , 2);
insertAtHead(head ,1);
insertAtHead(head , 1);
insertAtHead(head ,1);
display(head);

}