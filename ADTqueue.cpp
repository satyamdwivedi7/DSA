#include <iostream>
using namespace std;
#define MAX 10
class Queue
{
public:
    int front = 0;
    int rear = -1;
    int queue[MAX];
    void enqueue(int data)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue is full" << endl;  
            return;
        }
        else
        {
            rear++;
            queue[rear] = data;
        }
    }

    void dequeue()
    {
        if (rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            front++;
        }
    }
    void print()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q;
    int data;
    while (data != -1)
    {
        cout << "Enter the data to enqueue = ";
        cin >> data;
        if (data == -1)
        {
            break;
        }
        q.enqueue(data);
    }
    q.print();
    q.dequeue();
    // q.enqueue(99);
    q.print();
}