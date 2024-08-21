#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime = false;
    cout << "Enter a number = ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = false;
        }
        else
        {
            prime = true;
        }
        i++;
    }
    if (prime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}