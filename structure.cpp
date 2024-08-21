#include <iostream>
using namespace std;

typedef struct a{
    int id;
    char c;
    float num;
}st;

int main(){
    st satyam;
    satyam.id = 100;
    satyam.c = 's';
    satyam.num = 1;

    cout << "My id is = " << satyam.id << endl;
    cout << "My favorite character is = " << satyam.c << endl;
    cout << "My favorite number is = " << satyam.num << endl;

    st shivam;
    shivam.id = 420;
    shivam.c = 'a';
    shivam.num = 7;

    cout << "My id is = " << shivam.id << endl;
    cout << "My favorite character is = " << shivam.c << endl;
    cout << "My favorite number is = " << shivam.num << endl;

    return 0;
}