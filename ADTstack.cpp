#include <iostream>
const int MAX = 10;
using namespace std;
class Stack
{
    int top = 0;

public:
    int stack[MAX];
    void push(int data)
    {
        stack[top] = data;
        top++;
    }
    void pop()
    {
        top--;
    }
    void display()
    {
        for (int i = 0; i < top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    void Top()
    {
        cout << top << endl;
        cout << stack[top - 1] << endl;
    }
};
int main()
{
    Stack s;
    while (1)
    {
        int data;
        cout << "Enter data to push = ";
        cin >> data;
        if (data == -1)
        {
            break;
        }
        s.push(data);
    }
    s.display();
    s.Top();
    s.pop();
    s.display();
}
