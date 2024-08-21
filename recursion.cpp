#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int fibonacci(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return fibonacci(a - 2) + fibonacci(a - 1);
}
int main()
{
    cout << fact(4) << endl;
    cout << fibonacci(5) << endl;
    return 0;
}