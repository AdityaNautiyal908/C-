#include <iostream>
using namespace std;

class B {
    public:
    void set_B(){
        cout<<"Inside B class"<<endl;
    }
};

class C {
    public:
    void set_C(){
        cout<<"Inside C class"<<endl;
    }
};

class A : public B, public C {
    public:
    void set_A(){
        cout<<"Inside A class"<<endl;
    }
};

int main(){
    A obj;
    obj.set_A();
    obj.set_B();
    obj.set_C();
}