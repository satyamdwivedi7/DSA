#include<iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c, n;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << a << " ";
    cout << b << " ";
    for (int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        }
} 