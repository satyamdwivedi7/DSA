#include <iostream>
using namespace std;
int unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
// void print(int a[],int n){
//     for (int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    cout << unique(arr, 5);
}