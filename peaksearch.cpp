#include <iostream>
using namespace std;

int peaksearch(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}
int main()
{
    int arr[7] = {1, 5, 7, 9, 4, 3, 2};

    cout << peaksearch(arr, 7);
}