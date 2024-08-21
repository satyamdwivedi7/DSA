#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    bool power = true;
    for (int i = 0; i <= 30; i++){
        int ans = pow(2,i);
        if (ans == n){
            power = true;
            break;
        }
        else{
            power = false;
        }
    }
    cout << power;
}