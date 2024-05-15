#include <iostream>
using namespace std;

class Aditya {
public:

void fun(){
    cout<<"Contain no parameter in function"<<endl;
}

void fun(int x){
    cout<<"Contain parameter of int data type in function"<<endl;
}

void fun(double x){
    cout<<"Contain parameter of double data type in function"<<endl;
}

};

int main(){
    Aditya obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.4);

    return 0;
}