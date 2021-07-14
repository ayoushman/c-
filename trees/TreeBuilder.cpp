#include <iostream>
using namespace std;

int search(int a[], int start, int end, int element)
{
    for (int i = start; i <= end; i++)
    {
        if (a[i] == element)
        {
            return i;
        }
    }
    return -1;
}

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

// Treee building from preorder and inorder
Node *buildTree(int preorder[], int inorder[], int start, int end)
{

    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

// Tree building from postorder and inorder

Node *BuildTreePostorder(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;

    Node *curr = new Node(val);
    if (start == end)
    {
        return curr;
    }

    int pos = search(inorder, start, end, val);
    curr->right = BuildTreePostorder(postorder, inorder, pos + 1, end);
    curr->left = BuildTreePostorder(postorder, inorder, start, pos - 1);

    return curr;
}
void InOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}


int main()
{

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    int postorder[] = {4 , 2 , 5 , 3 ,1};

//     Node *root = buildTree(preorder, inorder, 0, 4);
// Node* roo2 = BuildTreePostorder(postorder , inorder , 0 , 4);

Node* root = new Node(5);
root->left = new Node(1);
root->right = new Node(7);
root->left->right = new Node(3);
root->left->right->left = new Node(2);
root->left->right->right = new Node(4);
    InOrder(root);
    cout<<endl;
    // InOrder(roo2);
}