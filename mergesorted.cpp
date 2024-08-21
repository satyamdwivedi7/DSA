#include <iostream>
using namespace std;
void merge(int arr[], int m, int arr2[], int n, int arr3[])
{
    int k = 0, i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] < arr2[j])
        {
            arr3[k++] = arr[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m){
        arr3[k] = arr[i];
        k++;
        i++;
    }
    while (j < n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int arr3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[10];
    merge(arr, 5, arr2, 3, arr3);
    print(arr3, 8);
}