#include <iostream>
using namespace std;

int fact(int x)
{
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int combination(int n, int r)
{
    // nCr
    int C;
    C = (fact(n)) / (fact(r) * fact(n - r));
    return C;
}

bool prime(int n)
{
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) flag = false;
    }
    return flag;
}

void fibonacci(int n){
    int a = 1; int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{
    fibonacci(10);
}