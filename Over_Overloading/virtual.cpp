#include <iostream>
using namespace std;

int A=10;

class A{
    public:
    void getdata(){
        cout<<"Inside A class"<<endl;
    }
};

class B:public A {
    public:
    void getdata(){
        cout<<"Inside B class"<<endl;
    }
};

int main(){
     B obj;
     obj.getdata();
     obj.A::getdata();

}