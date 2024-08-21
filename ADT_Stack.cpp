#include <iostream>
using namespace std;
#define MAX 10

int stack[MAX];
int top = -1;

void push(int d)
{
    if (top >= MAX - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        stack[++top] = d;
    }
}

void pop()
{
    stack[top--];
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
}

int main()
{
    cout << "Stack implementation with Array" << endl;
    do
    {
        int choice, data;
        cout << endl
             << "------------------------------------------------" << endl;
        cout << "1. Push.  ";
        cout << "2. Display  ";
        cout << "3. Pop.  ";
        cout << "4. Exit.  " << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the data to push in the stack = ";
            cin >> data;
            push(data);
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(0);
        }
    } while (1);
    return 0;
}