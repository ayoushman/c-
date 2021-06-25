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


void insertAtHead(Node *&head , int val){
    Node * n = new Node(val);
    if(head==NULL){
        head =  n ;
        return;
    
    }
n->next = head;
head =n;

}

void deleteAtHead(Node* &head ){

Node * todelete =  head ; 
 
 head = head ->next;

 delete todelete;
}

void deleteAtTail(Node* &head){

Node * temp  =head ;

while(temp->next->next !=NULL){
    temp = temp->next;
}

Node* todelete =  temp->next;
temp->next = NULL;
delete todelete;

}

void deleteANode(Node* &head , int val){

Node * temp = head ; 

while(temp->next->data !=val){
    temp = temp->next;
}

Node* todelete =  temp->next;
temp->next = temp->next->next;

delete todelete;
    
}

Node*  reverseList(Node * &head){
    Node* prevptr = NULL;
    Node* currptr =  head; 
    Node* nextptr ;

    while(currptr!=NULL){
        nextptr = currptr->next;

        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

// void reverseListTwoPoints(Node * head , int left , int right){
//     Node* temp = head ; 
 
//     int count = 1;

//     while(count<left){
//           cout<<temp->data<<endl;
//         temp = temp->next;
//         count++;
//     }
//     cout<<temp->data<<endl;
// //     cout<<temp->data<<endl;
// // cout<<temp->next->data<<endl;
// Node* leftptr = temp;


// // Node* rightptr = temp;



// while(count<right){
  
//     temp = temp->next;
//     count++;
// }


// Node* rightptr = temp;
// Node* tailptr = rightptr->next;
// tailptr->next = NULL;



// Node* preptr =  leftptr;
// Node* currptr = preptr->next;

// Node* nextptr =currptr;

// while(currptr->data!=right){
// nextptr = currptr->next;

//         currptr->next = preptr;

//         preptr = currptr;
//         currptr = nextptr;
// }

// temp->next = currptr;
// leftptr->next = tailptr;
// }

Node* reverseLinkedListTwo(Node* head , int left , int right){

    // hardik solution

    // wrong solution
    /*   Node* temp=head;
        Node* tmp=NULL;
        
        while(temp!=NULL)
        {
            if(temp->data==left)
            {
                tmp=temp;
            }
            if(temp->data==right)
            {
                break;
            }
            temp=temp->next;
        }
        int i=temp->data;
        temp->data=tmp->data;
        tmp->data=i;
        return head; */
if(head==NULL){
    return NULL;
}

Node* prev = NULL;
Node* curr = head;

while(left>1){
prev =curr;
curr = curr->next;
left--;
right--;
}

Node* connection = prev ;

Node* tail = curr;
Node* nextptr;

while(right>0){
nextptr = curr->next;
curr->next = prev;
prev = curr;

curr=nextptr;
right--;
}

if(connection!=NULL){
    connection->next = prev;
}
else{
    head = prev;
}

tail->next = curr;

return head;
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

// insertAtTail( head , 2);
// insertAtTail(head ,4);
// insertAtTail(head , 7);
// insertAtTail(head ,1);
// insertAtHead(head , 11);
// insertAtTail(head ,9);
// insertAtTail(head ,12);
// insertAtTail(head ,15);

// insertAtTail(head ,3);

// display(head);
// reverseListTwoPoints(head ,1 , 15 );
// cout<<endl;
// display(head);
// cout<<endl;
// Node * newhead ;

// newhead = reverseList(head);
// display(newhead);
insertAtHead(head , 7);
insertAtHead(head , 6);
insertAtHead(head , 5);
insertAtHead(head , 4);
insertAtHead(head , 3);
insertAtHead(head , 2);
insertAtHead(head , 1);
display(head);
cout<<endl<<endl;
reverseLinkedListTwo(head , 3 , 6);
display(head);


}