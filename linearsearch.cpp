#include <iostream>
using namespace std;
int main()
{
    int n;
    int value;
    cout << "Enter the length of array = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to insert = ";
        cin >> arr[i];
    }
    cout << "Enter the value to search = ";
    cin >> value;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            cout << "Value found." << endl;
        }
    }
}