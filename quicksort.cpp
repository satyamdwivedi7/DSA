#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = start + count;
    swap(arr[pivotindex], arr[start]);

    int i = start, j = end;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotindex = partition(arr, start, end);
    quicksort(arr, start, pivotindex - 1);
    quicksort(arr, pivotindex + 1, end);
}

int main()
{

    int length;
    cout << "Enter the length of array: ";
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter element at " + i << " : ";
        cin >> arr[i];
    }
    cout << "Before Sorting: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "After Sorting: " << endl;
    quicksort(arr, 0, length - 1);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}