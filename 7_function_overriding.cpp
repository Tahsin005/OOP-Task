#include<bits/stdc++.h>
#define ll long long
using namespace std;

class A{
    public:
        void display() {
            cout << "A display" << endl;
        }
};
class B: public A {
    public:
        void display() {
            cout << "B display" << endl;
            cout << "Overridden" << endl;
        }
};
int main(){
    B obj;
    obj.display();
    
    return 0;
}