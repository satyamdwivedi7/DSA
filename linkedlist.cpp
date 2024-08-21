#include <iostream>
using namespace std;
class LinkedList
{
public:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
    int count2 = 0;
    void insertAtHead(int data)
    {
        count++;
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        if (count == 1)
        {
            tail = head;
        }
    }
    void InseretAtEnd(int data)
    {
        count2++;
        if (count2 == 1)
        {
            insertAtHead(data);
            return;
        }
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    void insertatmiddle(int position, int data)
    {
        if (position == 1)
        {
            insertAtHead(data);
            return;
        }
        Node *temphead = head;
        int count = 1;
        while (count < position - 1)
        {
            temphead = temphead->next;
            count++;
        }
        Node *temp = new Node(data);
        temp->next = temphead->next;
        temphead->next = temp;
        if (temp->next == NULL)
        {
            InseretAtEnd(data);
            return;
        }
    }
    void deleteatposition(int position)
    {
        if (position == 1)
        {
            head = head->next;
        }
        else
        {
            Node *temphead = head;
            int count = 1;
            while (count != position - 1)
            {
                temphead = temphead->next;
                count++;
            }
            temphead->next = temphead->next->next;
        }
    }
    void print()
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
    LinkedList l;
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
            l.insertAtHead(data);
            break;

        case 2:
            cout << "Enter the data to insert = ";
            cin >> data;
            l.InseretAtEnd(data);
            break;

        case 3:
            cout << "Enter the position to insert in = ";
            cin >> position;
            cout << "Enter the data to insert = ";
            cin >> data;
            l.insertatmiddle(position, data);
            break;

        case 4:
            cout << "Enter the position to delete = ";
            cin >> position;
            l.deleteatposition(position);
            break;

        case 5:
            l.print();
            break;

        case 6:
            exit(0);
        }
    }
}
