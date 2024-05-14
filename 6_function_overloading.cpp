#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Calculator{
    public:
        int add(int a, int b) {
            return a + b;
        }

        int add(int a, int b, int c) {
            return a + b + c;
        }
};

/*
    Compile-time polymorphism 
*/
int main(){
    Calculator obj;
    cout << obj.add(1, 2) << endl;
    cout << obj.add(1, 2, 3) << endl;
    
    return 0;
}