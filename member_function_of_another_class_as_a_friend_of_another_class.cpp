#include<bits/stdc++.h>
#define ll long long
using namespace std;

class base;

class anotherClass {
    public:
        void memberFunction(base &obj);
};

class base {
    private:
        int value;
    public:
        base() {
            value = 69;
        }

        friend void anotherClass::memberFunction(base &obj);
};

void anotherClass::memberFunction(base &obj) {
    cout << obj.value << '\n';
}
int main(){
    base objA;
    anotherClass obj;
    obj.memberFunction(objA);

    return 0;
}