#include <iostream>
using namespace std;
class Linkedlist
{
public:
    class Node
    {
    public:
        int data;
        Node *next = NULL;
        Node *prev = NULL;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };
    Node *head = NULL;
    Node *tail = NULL;
    void insertathead(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    void insertattail(int data)
    {
        Node *temp = new Node(data);
        if (tail == NULL)
        {
            tail = temp;
            head = temp;
            return;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Linkedlist l;
    while (1)
    {
        cout << "1. Insert at Beginning." << endl;
        cout << "2. Insert at End." << endl;
        cout << "3. Insert at position." << endl;
        cout << "4. Delete at position." << endl;
        cout << "5. Display." << endl;
        cout << "6. Exit" << endl;

        int choice;
        int position;
        cout << "Enter your choice = ";
        cin >> choice;
        int data;
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert = ";
            cin >> data;
            l.insertathead(data);
            break;

        case 2:
            cout << "Enter the data to insert = ";
            cin >> data;
            l.insertattail(data);
            break;

            // case 3:
            //     cout << "Enter the position to insert in = ";
            //     cin >> position;
            //     cout << "Enter the data to insert = ";
            //     cin >> data;
            //     l.insertatmiddle(position, data);
            //     break;

            // case 4:
            //     cout << "Enter the position to delete = ";
            //     cin >> position;
            //     l.deleteatposition(position);
            //     break;

        case 5:
            l.display();
            break;

        case 6:
            exit(0);
        }
    }
}