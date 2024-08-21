#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
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
    bubblesort(arr, n);
    print(arr, n);
}