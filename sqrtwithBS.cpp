#include <iostream>
using namespace std;

int sqrt(int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;
    cout << sqrt(n);
    // int arr[n - 1];
    // for (int i = 0; i < n; i++){
    //     arr[i] = i;
    // }
}