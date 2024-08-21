#include <iostream>
using namespace std;

void reverse(int a[], int n){
    int start = 0;
    int end = n - 1;
    while (start <= end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void print(int a[],int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[5] = {1,2,3,4,5};
    reverse(a, 5);
    print(a, 5);
}