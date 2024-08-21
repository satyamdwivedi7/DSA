#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
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
        cout << "Enter the value to store in the array = ";
        cin >> val;
        arr[i] = val;
    }
    print(arr, n);
    cout << endl
         << "Sorted array" << endl;
    sort(arr, n);
    print(arr, n);
    cout << endl;
    int key;
    cout << "Enter the key to search = ";
    cin >> key;
    int index = binarysearch(arr, n, key);
    cout << "The index of " << key << " is " << index;
}