#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Satyam";
    m[10] = "Dwivedi";
    m[12] = "coding";
    m.insert({5, "Hello"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << m.count(12) << endl;
    cout << m.count(100) << endl;
    m.erase(10);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }
}