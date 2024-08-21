#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;

    int arr[n];
    int val;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to insert = ";
        cin >> val;
        arr[i] = val;
    }
    print(arr, n);
    cout << endl;
    selection(arr, n);
    print(arr, n);
}