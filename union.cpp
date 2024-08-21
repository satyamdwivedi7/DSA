#include <iostream>
using namespace std;
union uni{
    int money;
    char m;
    float mon;
};

int main(){
    union uni m1;
    m1.money = 10000;
    m1.m = 'm';
    m1.mon = 100.0256;

    cout << m1.money;
    // cout << m1.m << endl;
    // cout << m1.mon << endl;

    return 0;

}