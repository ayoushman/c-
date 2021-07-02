#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Count nodes in a binary tree 

int CountNode(Node* &root){
    if(root==NULL){
        return 0;
    }
return   CountNode(root->left) + CountNode(root->right) +1;
}


// Sum of all the nodes in the binary tree


int SumNodes(Node* &root){
   
    if(root==NULL){
        return 0;
    }
return   SumNodes(root->left) + SumNodes(root->right) +root->data;
}

// Calcualte height of the binary treee 


int BinaryHeight(Node* root){

if(root==NULL){
    return 0;
}

int leftHeight =  BinaryHeight(root->left);
int rightHeight = BinaryHeight(root->right);


return max(leftHeight , rightHeight) + 1 ;


}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<CountNode(root)<<" ";
    cout<<SumNodes(root)<<" "<<endl;
    cout<<BinaryHeight(root)<<endl;

  
}

