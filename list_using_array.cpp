#include <iostream>
using namespace std;
#define MAX 10
int list[MAX];
int last = -1;
void insert(int d){
    list[last + 1] = d;
    last += 1;
}
void display(){
    int i;
    for (i = 0; i <= last; i++){
        cout << list[i] << endl;
    }
}
int main(){
    int choice;
    int data;
    do{
        cout << "Implementation of array based list" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Display" << endl;
        cout << "3. Pop" <<endl;
        cout << "4. Exit" << endl;
        cout << "*************************" << endl;
        cout << "Enter the option = ";
        cin >> choice;
        if (choice == 4){
            break;
        }
        switch (choice){
            case 1:
                cout << "Enter the data to insert at end = ";
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
                exit(0);
        }
    }while (1);
    return 0;
}