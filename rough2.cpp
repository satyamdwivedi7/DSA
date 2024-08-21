#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;  
    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
void sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] < arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}
void print (int arr[], int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, val;
    cout << "Enter n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++){
        cout << "Enter the value = ";
        cin >> val;
        arr[i] = val;
    } 

    print (arr, n);
    sort (arr, n);
    print (arr, n);
    int key ;
    cout << "Enter the key = ";
    cin >> key;
    cout << binarysearch(arr, n, key );
}