#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1;
        int k = 1;
        while (j)
        {
            cout << k;
            j--;
            k++;
        }

        int star = 0;
        while (star <= i-1)
        {
            cout << "*";
            star++;
        }
        int star2 = 1;
        while (star2 <= i - 1)
        {
            cout << "*";
            star2++;
        }
        int l = 1;
        while (l <= n - i + 1)
        {
            cout << l;
            l++;
        }
        cout << endl;
        i++;
    }
}