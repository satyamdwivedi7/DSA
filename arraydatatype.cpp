#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    array<int, 4> a = {4, 5, 6, 7};
    int size = a.size();
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " << arr[i] << endl;
    }
    cout << "Element at second index = " << a.at(2) << endl;
    cout << "If the array is empty = " << a.empty() << endl;
    cout << "First element = " << a.front() << endl;
    cout << "Last element = " << a.back() << endl;
}