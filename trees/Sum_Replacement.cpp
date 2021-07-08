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

void displayTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    displayTree(root->left);
    displayTree(root->right);
}

Node *sumReplacement(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    sumReplacement(root->left);
    sumReplacement(root->right);

    if (root->left != NULL)
    {
        root->data = root->data + root->left->data;
    }

    if (root->right != NULL)
    {
        root->data = root->data + root->right->data;
    }

    return root;
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

    displayTree(root);
    cout << endl;
    Node *root1 = sumReplacement(root);
    displayTree(root1);
}