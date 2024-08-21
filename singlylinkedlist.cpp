#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *insert_front(node *head, int data);
node *insert_end(node *head, int data);
node *remove(node *head);
void display(node *head);

int main()
{
    node *head = NULL;
    int choice, data;

    while (true)
    {
        cout << endl
             << "1. Insert at front" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            head = insert_front(head, data);
            break;

        case 2:
            cout << "Enter data: ";
            cin >> data;
            head = insert_end(head, data);
            break;

        case 3:
            head = remove(head);
            break;

        case 4:
            display(head);
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

node *insert_front(node *head, int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

node *insert_end(node *head, int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
        return new_node;

    node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new_node;
    return head;
}

node *remove(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return NULL;
    }

    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
