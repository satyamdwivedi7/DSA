#include <iostream>
using namespace std;
int main()
{
    int a, rev = 0 ;
    cout << "Enter a number = ";
    cin >> a;
    int b = a;

    while (a > 0){
        rev = rev * 10 + a % 10;
        a/=10;
    }
    cout << "The reverse number is = "<< rev << endl;

    if (b == rev){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}   
