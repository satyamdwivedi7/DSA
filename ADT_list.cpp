#include <iostream>
int list[10];
int last = -1;
using namespace std;
void insert(int a);
void display();
void insertinbetween(int x, int y);
int main()
{
    do
    {
        int choice, data;
        cout << endl <<"***List of choices***" << endl;
        cout << "---------------------";
        cout << "1. Insert  ";
        cout << "2. Display  ";
        cout << "3. Pop  ";
        cout << "4. Insert in between  ";
        cout << "5. Exit  ";
        cout << "---------------------" << endl;
        cout << "Enter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert = ";
            cin >> data;
            insert(data);
            break;
        case 2:
            display();
            break;
        case 3:
            last--;
            break;
        case 4:
            int index, value;
            cout << "Enter the index you want to insert in = ";
            cin >> index;
            cout << "Enter the value you want to insert = ";
            cin >> value;
            insertinbetween(index, value);
            break;
        case 5:
            exit(0);
        }
    } while (1);
}

void insert(int d)
{
    list[last + 1] = d;
    last += 1;
}

void display()
{
    for (int i = 0; i <= last; i++)
    {
        cout << list[i] << " ";
    }
}

void insertinbetween(int p, int v)
{
    for (int i = last; i >= p ; i--)
    {
        list[i + 1] = list[i];
    }
        list[p] = v;
        last ++;
}