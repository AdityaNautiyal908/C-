#include <iostream>
using namespace std;

class A {
    public:
    void fun1(){
        cout<<"Inside A class"<<endl;
    }
};

class B : public A {
    public:
    void fun2(){
        cout<<"Inside B class"<<endl;
    }
};

int main(){
    B obj;
    obj.fun1();
    obj.fun2();

    return 0;
}