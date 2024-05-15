#include <iostream>
using namespace std;

class parent {
    public:
    void speak(){
        cout<<"Inside parent class"<<endl;
    }
};

class subclass1: public parent {
    public:
    void speak(){
        cout<<"Inside subclass 1"<<endl;
    }
};

class subclass2: public parent {
    public:
    void speak(){
        cout<<"Inside subclass 2"<<endl;
    }
};

int main(){
    subclass1 obj1;
    subclass2 obj2;
    parent obj3;

    obj1.speak();
    obj2.speak();
    return 0;
}