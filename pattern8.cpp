#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    
    int i = 1;
    
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << (i - j + 1);
            j++;
        }
        cout << endl;
        i++;
    }
}

// 1
// 21
// 321
// 4321
// 54321