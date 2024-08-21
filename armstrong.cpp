#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int a, n, val = 0;
    cout << "Enter n = ";
    cin >> n;
    int b = n;
    for (int i = 0; i < to_string(b).length(); i++){
        a = n % 10;
        val += pow(a,to_string(b).length());
        n /= 10; 
    }
    cout << val; 
    return 0;
}