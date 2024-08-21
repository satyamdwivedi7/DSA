#include <iostream>
using namespace std;

class ADT_list
{
private:
    int list[10];
    int last = -1;

public:
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
        for (int i = last; i >= p; i--)
        {
            list[i + 1] = list[i];
        }
        list[p] = v;
        last++;
    }

    void pop(){
        list[last--];
    }
};

int main()
{
    ADT_list obj;
    do
    {
        int choice, data;
        cout << endl
             << "***List of choices***" << endl;
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
            obj.insert(data);
            break;
        case 2:
            obj.display();
            break;
        case 3:
            obj.pop();
            break;
        case 4:
            int index, value;
            cout << "Enter the index you want to insert in = ";
            cin >> index;
            cout << "Enter the value you want to insert = ";
            cin >> value;
            obj.insertinbetween(index, value);
            break;
        case 5:
            exit(0);
        }
    } while (1);
}