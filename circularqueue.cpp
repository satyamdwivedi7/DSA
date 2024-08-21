#include <iostream>
#define MAX 5
using namespace std;
class CircularQueue
{
private:
    int front;
    int rear;
    int queue[MAX];

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int data)
    {
        if (isfull())
        {
            cout << "Queue if full" << endl;
        }
        else
        {
            if (front = -1)
                front = 0;
            rear = (rear + 1) % MAX;
            queue[rear] = data;
        }
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty";
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
    bool isfull()
    {
        if (front == 0 && rear == MAX - 1)
            return true;
        else if (front == rear + 1)
            return true;
        return false;
    }
    bool isempty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        if (isempty())
        {
            cout << "Queue is empty";
        }
        else
        {
            for (int i = front; i != rear; i = (i + 1) % MAX)
            {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    CircularQueue q;
    int data;
    while (1)
    {
        cout << "Enter the data to enqueue = ";
        cin >> data;
        if (q.isfull())
        {
            cout << "Queue is full." << endl;
            break;
        }
        q.enqueue(data);
    }
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(99);
}