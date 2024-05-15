#include <iostream>
using namespace std;

class B {
    public:
    void setdata(){
        cout<<"Inside B class"<<endl;
    }
};

class C {
    public:
    void setdata(){
        cout<<"Inside C class"<<endl;
    }
};

class A : public B, public C {  
};

int main(){
    A obj;
    obj.B::setdata();
    obj.C::setdata();
}

