

// Syntax = return_type opeartor + (input augument){};

#include <iostream>
using namespace std;

class  A {
    public:
    int a;
    int b;


    public:
    void operator+ (A &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<<"output "<<value2-value1<<endl;

        cout<<"Hello world"<<endl;;
    }

    void operator() (){
        cout<<"Aditya Nautiyal "<<this->a<<endl;
    }
};

int main(){
    A obj1,obj2;
    obj1.a=1;
    obj2.a=7;

    // obj1 + obj2;
    obj1();
    obj2();
    
}