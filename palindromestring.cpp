#include <iostream>
#include <vector>
using namespace std;
void reverse(vector <string> &v, int len){
    int start = 0;
    int end = len - 1;
    while (start < end){
        swap(v[start++],v[end--] );
    }
}
int main()
{
    vector<char> v;
    string input;
    cin >> input;
    v.push_back(input);
    int len = v.size();
    cout << len << endl;
    reverse(v, len);
    
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i;
    }
    cout << endl;
    for (auto i : v)
    {
        cout << i;
    }
}