#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = arr[i];
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter no. of elements = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to append = ";
        cin >> arr[i];
    }
    int maxi = max(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxi)
        {
            arr[i] = 0;
        }
    }
    maxi = max(arr, n);
    cout << maxi;
}