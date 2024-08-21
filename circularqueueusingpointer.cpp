#include <iostream>
using namespace std;

class CircularQueue
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
    Node *front = NULL;
    Node *rear = NULL;
    int size = 5;
    int count = 0;

    bool isempty()
    {
        return (front == NULL);
    }
    void enqueue(int data)
    {
        if (count == size)
        {
            cout << "Queue is full" << endl;
            return;
        }
        Node *temp = new Node(data);
        if (isempty())
        {
            front = temp;
            rear = temp;
        }
        rear->next = temp;
        rear = temp;
        rear->next = front;
        count++;
    }
    void dequeue()
    {
        if (count == 0)
        {
            front = rear = NULL;
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        count--;
        if (count == 0)
        {
            front = rear = NULL;
            cout << "Queue is empty." << endl;
            return;
        }
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        while (temp != rear)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
        cout << endl;
    }
};

int main()
{
    CircularQueue c;
    while (1)
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter the data to enqueue = ";
            cin >> data;
            c.enqueue(data);
            break;

        case 2:
            c.dequeue();
            break;

        case 3:
            c.display();
            break;

        case 4:
            exit(0);
        }
    }
}