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

Node *insertInBST(Node *root, int data)
{

    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->data)
    {
        root->left = insertInBST(root->left, data);
    }

    else
    {
        root->right = insertInBST(root->right, data);
    }

    return root;
}

void PreOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

int c = 0;

Node *searchInBst(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    else if (root->data == key)
    {
        return root;
    }

    else if (root->data < key)
    {
        return searchInBst(root->right, key);
    }
    else if (root->data > key)
    {
        return searchInBst(root->left, key);
    }
}

// inorder successor


Node* inorderSuccessor(Node* root ){
    Node* curr = root;
    while(curr&& curr->left !=NULL){
        curr= curr->left;
    }

    return curr ;
}


// Delete in bst

Node *deleteinBST(Node *root, int deleteNode)
{

    if (deleteNode < root->data)
    {
        root->left = deleteinBST(root->left, deleteNode);
    }

    else if (deleteNode > root->data)
    {
        root->right = deleteinBST(root->right, deleteNode);
    }

    else if (deleteNode == root->data)
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteinBST(root->right , temp->data);
    }

    return root;
}

int main()
{

    Node *root = NULL;

    root = insertInBST(root, 5);
    insertInBST(root, 1);
    insertInBST(root, 6);
    insertInBST(root, 2);

    insertInBST(root, 4);

    PreOrder(root);

    if (searchInBst(root, 6))
    {
        cout << "Key exist";
    }

    else
    {
        cout << "Key dont exist";
    }

    Node* newroot = deleteinBST(root , 2);
    PreOrder(newroot);
}