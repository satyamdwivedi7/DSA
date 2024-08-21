#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i <= n * 2)
    {
        sum += i;
        i = i + 2;
    }
    cout << sum;
}