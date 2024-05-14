#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    int value;
    A(int value){
        this->value = value;
        cout << "Constructor Called" << endl;
    }

    void display(){
        cout << "Hello" << endl;
    }

    int temp(int v);
};


int A::temp(int v){
    return v;
}
                    
int main(){
    A obj(8);
    cout << obj.temp(35) << endl;
            
              
    return 0;
}
