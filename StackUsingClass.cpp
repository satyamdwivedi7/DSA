#include <iostream>
using namespace std;

class adt_stack
{
private:
    int top = -1;
    int stack[10];

public:

    void push(int d)
    {
        if (top == 9)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            stack[top + 1] = d;
            top++;
        }
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }
};

int main()
{
    adt_stack obj;
    do
    {
        int choice;
        cout << endl
             << "Stack implementation using array" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "1. Push  ";
        cout << "2. Display  ";
        cout << "3. Pop  ";
        cout << "4. Exit  " << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter the data to input = ";
            cin >> data;
            obj.push(data);
            break;
        case 2:
            cout << "Your data in the stack are " << endl;
            obj.display();
            break;
        case 3:
            obj.pop();
            break;
        case 4:
            exit(0);
        }
    } while (1);
}
