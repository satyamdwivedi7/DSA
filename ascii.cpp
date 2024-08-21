#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Input a charaacter: ";
    cin >> a;
    
    if (a >= 'a' && a <= 'z'){
        cout << "The input character is lower case";
    }
    else if (a >= 'A' && a<= 'Z'){
        cout << "The input character is a upper case";
    }
    else if (a>='0' && a<= '9'){
        cout << "The input character is a number";
    }
}