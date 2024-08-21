#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(50);
    s.push(60);
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
}