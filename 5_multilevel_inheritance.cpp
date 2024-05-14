#include<bits/stdc++.h>
#define ll long long
using namespace std;
class A{
    public:
        string name = "Bob";
        void displayA() {
            cout << "A display" << endl;
            cout << "Name from A class : " << name << endl;
        }
};
class B: public A {
    public:
        void displayB() {
            cout << "B display" << endl;
        }
};
class C: public B{
    public:
        C() {

        }
        C(string name) {
            this->name = name;
        }
        void displayC() {
            cout << "C display" << endl;
            cout << "Name that was inherited from grandparent : " << name << endl;
        }
};
int main(){
    // C obj;
    C obj("Multilevel inheritance");
    obj.displayA();
    obj.displayB();
    obj.displayC();
    
    return 0;
}