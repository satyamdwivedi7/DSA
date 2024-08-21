#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(15);
    maxi.push(11);
    maxi.push(19);
    maxi.push(0);
    maxi.push(5);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(45);
    mini.push(31);
    mini.push(10);
    mini.push(1);
    int k = mini.size();
    for (int i = 0; i < k; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
}