#include <iostream>
#include <stack> //This is including stack library in the program.
using namespace std;
int main(){
    stack <int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    cout << mystack.top() << endl;
    mystack.pop();
    cout << mystack.top() << endl;
    cout << mystack.empty() << endl;

}