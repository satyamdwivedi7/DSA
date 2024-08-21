#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(100);
    v.push_back(10);
    v.push_back(12);
    cout << binary_search(v.begin(), v.end(), 5) << endl;
    cout << binary_search(v.begin(), v.end(), 0) << endl;
    sort_heap(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Lower Bound " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    int a = 5, b = 6;
    cout << "Max = " << max(a, b) << endl;
    cout << "Min = " << min(a, b) << endl;
    swap(a, b);
    cout << a << endl;
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate:" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}