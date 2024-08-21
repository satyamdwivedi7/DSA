#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node *buildtree(Node *root)
{
    cout << endl
         << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data to insert in left of " << data << " :";
    root->left = buildtree(root->left);
    cout << "Enter the data to insert in right of " << data << ": ";
    root->right = buildtree(root->right);
    return root;
}

int main()
{
    Node *root = NULL;
    root = buildtree(root);
    cout << "Inorder Traversal: " << endl;
    inorder(root);
    cout << endl
         << "Preorder Traversal: " << endl;
    preorder(root);
    cout << endl
         << "Postorder Traversal: " << endl;
    postorder(root);
}