#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    //And Operator
    cout << "a&b = " << (a&b) << endl;
    //Or Operator
    cout << "a|b = " << (a|b) << endl;
    //Not operator;
    cout << "~a and ~b = " << ~a << " " << ~b << " " << a+~b <<  endl;
    //XOR Operator
    cout << "a^b = " << (a^b) << endl;

    //Left Shift
    cout << (5 << 2) << endl;
    //Right Shift
    cout << (5 >> 2) << endl;

}