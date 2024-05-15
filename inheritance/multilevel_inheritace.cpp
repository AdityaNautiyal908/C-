#include <iostream>
using namespace std;

class A {
    public:
    void set_A(){
        cout<<"Inside A class"<<endl;
    }
};

class B: public A {
    public:
    void set_B(){
        cout<<"Inside B class"<<endl;
    }
};

class C:public B {
    public:
    void set_C(){
        cout<<"Inside C class"<<endl;
    }
};

int main(){
    C obj;
    obj.set_A();
    obj.set_B();
    obj.set_C();

    return 0;
}