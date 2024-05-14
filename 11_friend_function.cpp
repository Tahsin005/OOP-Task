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

        friend void My_friend(A& a);
};
void My_friend(A& obj) {
    cout << "From friend function : " << obj.value << endl;
}
int main(){
    A a(22);
    a.display();

    // friend fuction

    My_friend(a);
    
    return 0;
}