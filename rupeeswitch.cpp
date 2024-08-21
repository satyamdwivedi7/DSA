#include <iostream>
using namespace std;
int main(){
    int choice, amount, n;
    cout << "Enter the amount = ";
    cin >> amount;
    while (amount != 0){
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice){
            case 1000:
                n = amount / choice;
                amount %= choice;
                break;
            case 500:
                n = amount / choice;
                amount %= choice;
                break;
            case 100:
                n = amount / choice;
                amount %= choice;
                break;
            case 50:
                n = amount / choice;
                amount %= choice;
                break;
            case 20:
                n = amount / choice;
                amount %= choice;
                break;
            case 10:
                n = amount / choice;
                amount %= choice;
                break;
            case 5:
                n = amount / choice;
                amount %= choice;
                break;
            case 2:
                n = amount / choice;
                amount %= choice;
                break;
            case 1:
                n = amount / choice;
                amount %= choice;
                break;
        }
        cout << "no. of " << choice << " notes is = " << n << endl;
    }
}