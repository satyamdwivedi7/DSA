#include <iostream>
using namespace std;
int main()
{
    int binary = 0;
    int decimal;
    cout << "Enter the value to convert in binary = ";
    cin >> decimal;
    int dec = decimal;
    while (decimal > 0){
        int rem = decimal % 2;   
        binary = binary * 10 + rem;
        decimal /= 2;
    }
    int reverse = 0;
    while (binary > 0){
        int remainder = binary % 10;
        reverse = reverse * 10 + remainder;
        binary /= 10;
    }
    cout <<"The binary number for " << dec << " is = " << reverse;
}