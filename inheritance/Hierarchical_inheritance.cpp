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

class D: public B {
    public:
    void set_D(){
        cout<<"Inside D class"<<endl;
    }
};

class E : public B {
    public:
    void set_E(){
        cout<<"Inside E class"<<endl;
    }
};

class C: public A {
    public:
    void set_C(){
        cout<<"Inside C class"<<endl;
    }
};

int main(){
    B obj;
    obj.set_A();
    C obj2;
    obj2.set_A();

    D obj3;
    obj3.set_A();

    E obj4;
    obj4.set_A();
}