#include <iostream>
using namespace std;

class Node
{public:
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

// Preorder traversal

void PreOrder(Node* &root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

// Inorder Traversal


void InOrder(Node* &root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<< root->data<<" ";
    InOrder(root->right);
}


// PostOrder Traversal 


void PostOrder(Node* & root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<< root->data<< " ";

}
int main()
{

    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(4);

    root->left->left = new Node(1);
    root->left->right = new Node(3);

    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);

}