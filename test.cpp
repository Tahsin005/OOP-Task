#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Counter{
    private:
        static int count;
    public:
        Counter() {
            count++;
        }

        static int getCount() {
            return count;
        }
};
int Counter::count = 0;
int main(){
    Counter obj1, obj2, obj3;
    cout << Counter::getCount() << endl;
    
    return 0;
}