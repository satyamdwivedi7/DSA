#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(10);
    q.push(100);
    q.push(1000);
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
}