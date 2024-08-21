#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m & n = ";
    cin >> m;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        int a;
        cout << "Enter the elements in array 1 = ";
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cout << "Enter the elements in array 2 = ";
        cin >> b;
        v2.push_back(b);
    }
    int i = m - 1;
    int j = n - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = v1[i] + v2[j] + carry;
        carry /= 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = v1[i] + carry;
        carry /= 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = v2[j] + carry;
        carry /= 10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {

        int sum = carry;
        carry /= 10;
        sum %= 10;
        ans.push_back(sum);
    }
    for (auto i = ans.rbegin(); i != ans.rend(); i++)
    {
        cout << *i;
    }cout << endl;
    for (auto i: ans){
        cout << i;
    }

}