// Encapulation = Information Hiding or Data Hiding

#include <iostream>
using namespace std;

class A {
    private:
    int a;
    int b;

    public:
    void fun(){
        a=10;
        b=5;
        cout<<"Adding : "<<a+b;
    }
};

int main(){
    A obj;
    obj.fun();
return 0;
}