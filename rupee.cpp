#include <iostream>
using namespace std;
int main()
{
    int amount, choice;
    cout << "Enter the amount = ";
    cin >> amount;
    int note;
    while (amount != 0)
    {
        cout << "Enter your choice of note = ";
        cin >> choice;
        note = amount / choice;
        amount = amount % choice;
        cout << choice << " rupee note is = " << note << endl;
    }
}