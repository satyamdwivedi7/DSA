#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int store = 0;
    int len = 0;

    int container = number;

    while(container != 0){
        len++;
        container = container / 10; 
    }

    container = 0;

    while (number != 0){
        store = number % 10;
        container = pow(store, len) + container;
        number = number / 10;
    }

    cout << container;



}