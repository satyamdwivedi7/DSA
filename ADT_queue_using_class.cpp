#include <iostream>
using namespace std;

class adt_queue
{
private:
    int rear = -1, front = -1;
    int queue[10];
    int top = sizeof(queue)/ sizeof(queue[0]);

public:
    void enqueue(int data){
        rear += 1;
        queue[rear] = data;
    }
    void dequeue(){
        front += 1;
    }
    void display(){
        for (int i = front + 1; i <= rear; i++){
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    adt_queue obj;
    do
    {
        int choice;
        cout << endl
             << "Queue implementation using array" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "1. Enqueue  ";
        cout << "2. Display  ";
        cout << "3. Dequeue  ";
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
            obj.enqueue(data);
            break;
        case 2:
            cout << "Your data in the queue are " << endl;
            obj.display();
            break;
        case 3:
            obj.dequeue();
            break;
        case 4:
            exit(0);
        }
    } while (1);
}
