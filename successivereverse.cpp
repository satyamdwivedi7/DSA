#include <iostream>
using namespace std;

void swapped(int a[], int n){
    int counter = 0;
    while(counter + 1 < n){
        swap(a[counter], a[counter + 1]);
        counter += 2;
    }

}

void print(int a[],int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[6] = {1,2,3,4,5,6};
    swapped(a, 6);
    print(a,6);
    
}