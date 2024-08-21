#include <iostream>
using namespace std;
int main()
{
    float n, gpa, gpas = 0;
    float credit, credits = 0, cgpa;
    cout << "Enter the number of subjects = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the number of credits in subject " << i << " = ";
        cin >> credit;
        cout << "Enter your gpa in the subject = ";
        cin >> gpa;
        credits += credit;
        gpas += credit * gpa;
    }
    cgpa = gpas / credits;
    cout << "Your cgpa is = " << cgpa;
}