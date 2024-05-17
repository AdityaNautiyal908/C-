#include <iostream>
using namespace std;

class Base {
    public:
    int fax;
    // Static data member
    static int timetoComplete;

    void get_Base(){
        cout<<"Inside a base class"<<endl;
    }

    void get_display(){
        cout<<"Display new things"<<endl;
    }
};

class Child : private Base {
    public:
    void print(){
        get_Base();
        get_display();
    }
};

// Initialization of static data memeber
int Base::timetoComplete=6;


int main(){
    Base obj,obj2,obj3,obj4;

    cout<<obj2.timetoComplete<<endl;
    cout<<obj3.timetoComplete<<endl;
    cout<<obj4.timetoComplete<<endl;


    return 0;
}