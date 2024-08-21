#include <iostream>
using namespace std;
#define MAX 10
class queue
{
public:
    int rear = -1;
    int front = -1;
    int queue[MAX];

private:
    void isempty()
    {
        if (rear == -1)
        {
            cout << "the queue is empty." << endl;
        }
        else if (rear == MAX)
        {
            cout << "The queue is full. " << endl;
        }
    }
    void enqueue()
    {
        front = 0;
        for (int i = ++rear; i < MAX; i++)
        {
            cin >> queue[i];
            cout << endl;
            rear++;
        }
    }
    void dequeue()
    {

        for (int i = 0; i <= rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
    void display()
    {
        for (int i = 0; i < rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue obj;
    do
    {
        cout << "**Implementation of array based queue**" << endl;
        cout << "1. Queue is either empty or full? " << endl;
        cout << "2. Enqueue " << endl;
        cout << "3. Dequeue " << endl;
        cout << "4. Display " << endl;
        cout << "5. Exit" << endl;
        cout << "Choose any of the above option" << endl;
        int option;
        cin >> option;
        if (option == 5)
        {
            return (0);
        }
        switch (option)
        {
        case 1:
            obj.isempty();
            break;
        case 2:
            obj.enqueue();
            break;
        case 3:
            obj.dequeue();
            break;
        case 4:
            obj.display();
            break;
        }
    } while (1);
}