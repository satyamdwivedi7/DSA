#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int bin, dec = 0;
    int binary;
    cout << "Enter the value in binary = ";
    cin >> bin;
    for (int i = 0; i < to_string(binary).length() ; i++){
        int rem = bin % 10;
        int conv = rem * pow(2,i);
        dec += conv;
        bin /= 10;
    }
    cout << "The converted decimal is = " << dec;

}