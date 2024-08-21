#include<iostream>
using namespace std;
int main()
{
    int arr1[3] = {1,3,5};
    int *p = arr1;
    for (int i=0; i < 3; i++)
    {
        cout << arr1[i] << endl;
        cout << p << endl;
    }
    return 0;
} 