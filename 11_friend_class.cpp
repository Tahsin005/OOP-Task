#include<bits/stdc++.h>
#define ll long long
using namespace std;
class A{
    int value;

    public:
        A(int value) {
            this->value = value;
        }
        void display () {
            cout << value << endl;
        }

        friend class My_friend;
};
class My_friend {
    public:
        void access_A(A& obj, int temp) {
            cout << obj.value << endl;
            // cout << temp << endl;
            obj.value = temp;
            cout << "After change the value at the friend class : " << obj.value << endl;
        }
};
int main(){
    A a(22);
    a.display();

    // friend class

    My_friend my_friend;
    my_friend.access_A(a, 99);
    
    return 0;
}