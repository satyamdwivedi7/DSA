#include <iostream>
using namespace std;
int main(){
    int cel, far;
    cout << "Enter temperature in celsius = ";
    cin >> cel;
    far = (cel*18)/10 + 32;
    cout << "The temperature in Farhenheit is = "<< far;
    
}