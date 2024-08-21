#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    int i = 1;
    while (i <= n){
        int space = 0;
        while (space < i){
            cout << " ";
            space ++;
        }
        int j = 1;
        while (j <= n-i+1){
            cout << i;
            j++; 
        }
        cout << endl;
        i++;
    }
}