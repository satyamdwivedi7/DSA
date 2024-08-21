#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value for n = ";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n){
        int j = 1;

        while (j <= n){
            char b = 'A' + count - 1;
            cout << b << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y