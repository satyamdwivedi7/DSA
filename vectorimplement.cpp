#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> number){
    for (int i = 0; i < number.size(); i++){
        cout << number[i] << " ";
    }
    cout << endl;
}

void linear_search(vector<int> number, int tofind){
    int i = 0;
    for (i = 0; i < number.size(); i++){
        if (tofind == number[i]){
            cout << "Found" << endl;
            break;
        } 
    }

    if (i == number.size()){
        cout << "Not Found" << endl;
    }
}

bool binary_search(vector<int> number, int tofind){
    int start = 0;
    int end = number.size();

    int mid = start + (end - start) / 2;

    while (start <= end){
        if (number[mid] == tofind){
            return true;
            break;
        }
        else if(number[mid] > tofind){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return false;
}




int main(){
    vector<int> number = {1, 2, 3, 4, 5};
    print(number);

    int tofind;
    cin >> tofind;
    linear_search(number, tofind);
    cout << binary_search(number, tofind);
}