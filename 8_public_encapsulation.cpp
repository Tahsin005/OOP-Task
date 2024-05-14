#include<bits/stdc++.h>
#define ll long long
using namespace std;
class A{
    public:
        int value;
        A(int value) {
            this->value = value;
        }
};
int main(){
    A obj(44);
    cout << obj.value << endl;
    
    return 0;
}