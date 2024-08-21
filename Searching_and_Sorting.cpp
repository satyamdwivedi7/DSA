#include <iostream>
using namespace std;

class search_sort
{
private:
    int n, choice, key;

public:
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

    void mergeSort()
    {
        // I am not confident in writing the code for merge sort.
    }

    void quickSort()
    {
        // I am not confident in writing the code for quick sort.
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
};

int main()
{
    search_sort obj;
    int n, choice, key;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to append in the array = ";
        cin >> arr[i];
    }
    obj.print(arr, n);
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
                obj.selection(arr, n);
                obj.print(arr, n);
                cout << endl;
                break;
            case 2:
                obj.bubble(arr, n);
                obj.print(arr, n);
                cout << endl;
                break;
            case 3:
                obj.insertion(arr, n);
                obj.print(arr, n);
                cout << endl;
                break;
            case 4:
                obj.mergeSort();
                obj.print(arr, n);
                cout << endl;
                cout << "I don't know how to write the code for merge sort" << endl;
                cout << endl;
                break;
            case 5:
                obj.quickSort();
                obj.print(arr, n);
                cout << endl;
                cout << "I don't know how to write the code for quick sort" << endl;
                cout << endl;
                break;
            }
            break;
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
                    cout << "Key found at index = " << obj.linear(arr, n, key) << endl;
                    break;
                case 2:
                    cout << "Key found at index = " << obj.binary(arr, n, key) << endl;
                    break;
                }
                break;
            }
        case 3:
            return 0;
        }
    }
}