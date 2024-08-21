#include <iostream>
using namespace std;

bool search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return true;
            break;
        }
    }
    return 0;
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key = ";
    cin >> key;
    cout << search(arr, 5, key);
}