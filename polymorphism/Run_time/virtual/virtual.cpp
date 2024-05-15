#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" <<endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" <<endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" <<endl;
    }
};

int main() {
    Dog obj1;
    Cat obj2;

    obj1.sound();
    obj2.sound();

    return 0;
}
