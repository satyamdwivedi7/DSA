#include <iostream>
using namespace std;
int main(){
    int a, b;
    char c;
    cout << "Enter the values for a, b and c = ";
    cin >> a >> b >> c;
    int calc;
    switch (c){
        case '+':
            calc = a + b;
            break;
        case '-':
            calc = a - b;
            break;
        case '*':
            calc = a * b;
            break;
        case '/':
            calc = a / b;
            break;
    }
    cout << calc;

}