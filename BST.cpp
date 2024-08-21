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

Node *insert(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void input(Node *&root)
{
    int data;
    while (data != -1)
    {
        cout << "Enter the data to input: ";
        cin >> data;
        if (data == -1)
        {
            return;
        }
        insert(root, data);
    }
}
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

Node *minval(Node *&root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deletenode(Node *&root, int element)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == element)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL && root->left != NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            return root;
        }
    }
    else if (root->data > element)
    {
        root->left = deletenode(root->left, element);
        return root;
    }
    else
    {
        root->right = deletenode(root->right, element);
        return root;
    }
}

Node *maxval(Node *&root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

bool search(Node *&root, int element)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == element)
    {
        return true;
    }
    if (element < root->data)
    {
        return search(root->left, element);
    }
    else
    {
        return search(root->right, element);
    }
}

int main()
{
    Node *root = NULL;
    while (1)
    {
        cout << endl
             << "1. Insert" << endl;
        cout << "2. Inorder Traversal" << endl;
        cout << "3. Preorder Traversal" << endl;
        cout << "4. Postorder Traversal" << endl;
        cout << "5. Delete from BST" << endl;
        cout << "6. Search in BST" << endl;
        cout << "7. Exit" << endl;

        int choice;
        int data;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // cout << "Enter the data to insert: ";
            // cin >> data;
            input(root);
            break;

        case 2:
            inorder(root);
            break;

        case 3:
            preorder(root);
            break;

        case 4:
            postorder(root);
            break;

        case 5:
            cout << "Enter the data to delete: ";
            cin >> data;
            deletenode(root, data);
            break;

        case 6:
            cout << "Enter the data to search: ";
            cin >> data;
            if (search(root, data))
            {
                cout << "Data found in BST";
            }
            else
            {
                cout << "Data not found in BST";
            }
            break;

        case 7:
            exit(0);
        }
    }
}