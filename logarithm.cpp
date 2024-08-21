#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    int b = log2(n);
    if (log2(n) == b){
        cout << true;
    }
    else {
        cout << false;
    }
    return 0;
}