#include <iostream>
using namespace std;


int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end  - start) / 2;
    while (start < end){
        if (arr[mid] >= key){
            start = end + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main(){
    int arr[5] = {7,9,1,2,3};
    int key;
    // cout << "Enter the value to search = "; 
    // cin >> key;
    cout << "The index of the key is = " << binarysearch(arr, 5, 2);

}