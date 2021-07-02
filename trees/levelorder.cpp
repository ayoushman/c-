#include <iostream>
#include <queue>
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
void LevelOrderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();

        if (n != NULL)
        {
            cout << n->data << " ";

            if (n->left)
            {
                q.push(n->left);
            }

            if (n->right)
            {
                q.push(n->right);
            }
        }

        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int LevelKSum(Node *&root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    int level = 0;
    int ans = 0;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *n = q.front();
        q.pop();

        if (n != NULL)

        {
            if (level == k)
            {
                cout << n->data << " ";
                ans = ans + n->data;
            }

            if (n->left)
            {
                q.push(n->left);
            }

            if (n->right)
            {
                q.push(n->right);
            }
        }

        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return ans;
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

    LevelOrderTraversal(root);
    cout << endl;
    cout << LevelKSum(root, 2) << " " << endl;
}