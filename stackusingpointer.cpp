#include <iostream>
using namespace std;

class Stack
{
private:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        return (top == NULL);
    }

    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << data << " onto the stack." << endl;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        Node *temp = top;
        int data = temp->data;
        top = top->next;
        delete temp;
        cout << "Popped element: " << data << endl;
        return data;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack contents: ";
        Node *temp = top;
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
    Stack s;
    int choice, data;

    do
    {
        cout << "\n\nStack Menu" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to push: ";
            cin >> data;
            s.push(data);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << "Element at the top of the stack: " << s.peek() << endl;
            break;
        case 4:
            s.display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (1);

    return 0;
}
