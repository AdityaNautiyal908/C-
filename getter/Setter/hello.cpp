#include <iostream>
using namespace std;

class Hero {
    private:
    string name;
    int age;
    string power;

    public:
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getPower(){
        return power;
    }

    void setName(string ch){
        name = ch;
    }

    void setAge(int g1){
        age = g1;
    }

    void setPower(string p1){
        power = p1;
    }
};

int main(){

    //static allocation
    Hero h1;
    h1.setName("Deku");
    h1.setAge(20);
    h1.setPower("All for One");
    
    cout<<"Name of hero : "<<h1.getName()<<endl;
    cout<<"Age of hero : "<<h1.getAge()<<endl;
    cout<<"Power of hero : "<<h1.getPower()<<endl;


    //dynamic allocation
    Hero *h2 = new Hero;

    h2->setAge(20);
    h2->setName("Deku");
    h2->setPower("One for All");

    cout<<h2->getAge()<<endl;
    cout<<h2->getName()<<endl;
    cout<<h2->getPower()<<endl;
    
}