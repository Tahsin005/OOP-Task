#include<bits/stdc++.h>
#define ll long long
using namespace std;
class A{
    int value;

    public:
        string name;
        A(string name){
            this->name = name;
        }   

        void setter(int v){
            value = v;
        }

        int getter(){
            return value;
        }

};
                
int main(){
    A obj("Encapsulation");
    // obj.value = 22;
    obj.setter(44);
    cout << obj.getter() << endl;
    cout << obj.name << endl; 
            
              
    return 0;
}
