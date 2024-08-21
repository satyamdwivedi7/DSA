#include <iostream>
using namespace std;


void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        bool isSwapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                isSwapped=true;
            }
        }
        if(isSwapped==false)
            break;
    }
}

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0 && arr[j+1]>arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
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
        cout << "Enter the value to input = ";
        cin >> val;
        arr[i] = val;
    }
    print(arr, n);
    cout << endl;
    sort(arr, n);
    print(arr, n);
    // cout<<endl;
    // bubble(arr,n);
    // print(arr,n);
    // cout<<endl;
    // insertion(arr,n);
}