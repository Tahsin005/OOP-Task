#include<bits/stdc++.h>
#define ll long long
using namespace std;

class A {
    public:
        void display1() {
            cout << "A display" << endl;
        }
};

class B {
    public:
        void display2() {
            cout << "B display" << endl;
        }
};

class C : public A, public B {
    public:
        void display3() {
            cout << "C display" << endl;
        }
};

int main() {
    C obj;
    obj.display1();
    obj.display2();
    obj.display3();
    return 0;
}

