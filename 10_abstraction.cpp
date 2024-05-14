#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
  
    virtual void move() {
        
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    // void move() {
    //     cout << "Moving Circle" << endl;
    // }
};

int main(){
    Circle circle;
    circle.draw();
    // circle.move();
    return 0;
}