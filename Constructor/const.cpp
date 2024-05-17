#include <iostream>
using namespace std;

class Hero {
    private:
    int health;
    char level;
    public:
    Hero() {
        cout<<"I want to become a Hero"<<endl;
    }

    // Paramerterised Constructor
    Hero(int health){
        this->health=health;
    }

    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h1){
        health=h1;
    }

    void setLevel(char l1){
        level=l1;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }


};

int main(){
    // Hero obj(10);
    // Hero *obj1=new Hero;
    // Hero temp(22,'A');

    Hero Deku(70,'A');
    Deku.print();

    Hero Luffy(Deku);
    Luffy.print();

    return 0;
}

