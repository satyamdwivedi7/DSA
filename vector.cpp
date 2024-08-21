#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    vector <int> v(5,1);
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    a.push_back(25);
    a.push_back(35);
    a.push_back(45);
    a.push_back(55);
    vector <int> last(a);
    for (int i:last){
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity = " << a.capacity() << endl;
    cout << "Size = " << a.size() << endl;
    cout << "Front = " << a.front() << endl;
    cout << "Last = " << a.back() << endl;
    a.pop_back();
    cout << "Last = " << a.back() << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    a.clear();
    cout << a.capacity() << endl;
    cout << a.size() << endl; 
}