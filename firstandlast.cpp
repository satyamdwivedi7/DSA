#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[8] = {1, 2, 3, 3, 3, 3, 4, 5};
    //first and last occurance is the index value of the key element
    int f = firstOcc(arr, 8, 3);
    int l = lastOcc(arr, 8, 3);
    cout << "The first occurance index is = " << f << endl;
    cout << "The last occurance index is = " << l << endl;
    cout << "The total no. of occurance of the key is = " << l - f + 1;
}