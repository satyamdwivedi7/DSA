#include <iostream>
using namespace std;
#define MAX 10
int list [MAX];
int last = -1;
void insert(int d){
    list[last + 1] = d;
    last += 1;
}
void display(){
    for (int i = 0; i <= last; i++){
        cout << list[i] << endl;
    }
}
int main(){
    int choice, data;
    do {
        cout << "***implementation of list using array***" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Display" << endl;
        cout << "3. Pop" << endl;
        cout << "4. exit" << endl;
        cout << "****************************************" << endl;
        cout << "Enter your choice from above menu = ";
        cin >> choice;
        
        if (choice < 1 && choice > 4){
            cout << "Enter a valid choice from the above menu." << endl;
            break;
        }
        else if (choice == 4){
            break;
        }

        switch (choice){
            case 1:
                cout << "Enter the data to insert in the list = ";
                cin >> data;
                insert(data);
                break;
            case 2:
                display();
                break;
            case 3:
                last --;
                break;

        }
    }while (1);
}