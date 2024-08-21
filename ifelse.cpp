#include<iostream>
using namespace std;

int main()
{
    int a, c, b = 10;
    cout << "Enter the value for a = ";
    cin >> a;
    if (a<b){
        c = a + b;
    }
    else{
        c = a - b;
    }
    cout << c << endl;
    return 0;
}