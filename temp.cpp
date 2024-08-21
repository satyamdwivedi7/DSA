#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of elements = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++){
        cout << "Enter the value to append = ";
        cin >> arr[i];
    }
    int max, max2, temp;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i+1]){
            max2 = max;
            max = arr[i];
        }
        else{
            max2 = max;
            max = arr[i + 1];
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << max;
    cout << endl;
    cout << max2;
}