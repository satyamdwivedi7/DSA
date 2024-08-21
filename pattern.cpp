#include<iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        for (int space = number - (i + 1); space >= 0; space--){
            cout << " " ;
        }
        
        for(int j = 0; j < (i + 1); j++){
            cout << "* " ;
        }
        cout << endl;
    }

    return 0;
    
}