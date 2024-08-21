#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a numebr = ";
    cin >> n;
    int i = 0;
    int even_sum = 0, odd_sum = 0;
    while (i <= n){
        if (i % 2 ==0){
            even_sum += i;
        }
        else {
            odd_sum += i;
        }
        i++;
        }
        cout << "The sum of even numbers is = "<< even_sum << endl;
        cout << "The sum of odd numbers is = "<< odd_sum << endl;
}