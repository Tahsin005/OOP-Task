#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Vehicle{
    public:
        string name;
        void drive() {
            cout << name << " is driving" << endl;
        }
};

class Car: public Vehicle{
    public:
        Car(string name) {
            this->name = name;
        }
};
int main(){
    Car obj("Car");
    obj.drive();
    
    return 0;
}