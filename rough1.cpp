#include <iostream>
using namespace std;
class Car{
    private:
    string make;
    string model;
    int year;
    public:
    Car(){
    make = "";
    model = "";
    year = 0;
    }
    
    void print(){
        cout << "Make:" << make<< ",";
        cout << "Model:" << model<< ",";
        cout << "Year:" << year<< endl;
    }
};
int main(){
    class Car c;
    cin >> c;
}