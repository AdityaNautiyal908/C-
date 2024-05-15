#include <iostream>
using namespace std;

class A {
    public:
    void set_A(){
        cout<<"Inside A class"<<endl;
    }
};

class B : public A {
    public:
    void set_B(){
        cout<<"Inside B class"<<endl;
    }
};

class D {
    public:
    void set_D(){
        cout<<"Inside D class"<<endl;
    }
};

class C: public A,public D {
    public:
    void set_C(){
        cout<<"Inside C class"<<endl;
    }
};


int main(){
    C obj;
    obj.set_D();
}