#include <iostream>
using namespace std;
void selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
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
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
            break;
        }
    }
}
int binary(int arr[], int n, int key)
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
    int n, choice, key;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to append in the array = ";
        cin >> arr[i];
    }
    print(arr, n);
    cout << endl;
    while (1)
    {
        cout << "------------------------------------------------------------" << endl;
        cout << "1. Sorting" << endl;
        cout << "2. Searching" << endl;
        cout << "3. Exit" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "Enter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "------------------------------------------------------------" << endl;
            cout << "1. Selection Sort" << endl;
            cout << "2. Bubble Sort" << endl;
            cout << "3. Insertion Sort" << endl;
            cout << "4. Merge Sort" << endl;
            cout << "5. Quick Sort" << endl;
            cout << "------------------------------------------------------------" << endl;
            cout << "Enter your choice = ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                selection(arr, n);
                print(arr, n);
                cout << endl;
                break;
            case 2:
                bubble(arr, n);
                print(arr, n);
                cout << endl;
                break;
            case 3:
                insertion(arr, n);
                print(arr, n);
                cout << endl;
                break;
            case 4:
                mergeSort(arr, 0, n - 1);
                print(arr, n);
                cout << endl;
                break;
            case 5:
                quickSort(arr, 0, n - 1);
                print(arr, n);
                cout << endl;
                break;
                break;
            }
        case 2:
            cout << "------------------------------------------------------------" << endl;
            cout << "1. Linear Search" << endl;
            cout << "2. Binary Search" << endl;
            cout << "------------------------------------------------------------" << endl;
            cout << "Enter your choice = ";
            cin >> choice;
            {
                cout << "Enter the key to search = ";
                cin >> key;
                switch (choice)
                {
                case 1:
                    cout << "Key found at index = " << linear(arr, n, key) << endl;
                    break;
                case 2:
                    cout << "Key found at index = " << binary(arr, n, key) << endl;
                    break;
                }
                break;
            }
        case 3:
            return 0;
        }
    }
}