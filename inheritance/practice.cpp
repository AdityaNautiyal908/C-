#include <iostream>
using namespace std;

class Hero {
    private:
    int age;
    string Name;
    string Power;

    public:
    int getAge(){
        return age;
    }

    string getName(){
        return Name;
    }

    string getPower(){
        return Power;
    }

    void setAge(int A){
        age=A;
    }

    void setName(string N){
        Name = N;
    }

    void setPower(string P){
        Power = P;
    }
};


int main(){
    Hero Deku,Kachaan;
    Deku.setAge(20);
    Deku.setName("Deku");
    Deku.setPower("All for One");

    Kachaan.setAge(21);
    Kachaan.setName("Kachaan");
    Kachaan.setPower("Blast");

    Kachaan = Deku;

    cout<<Kachaan.getAge()<<endl;
    cout<<Kachaan.getName()<<endl;
    cout<<Kachaan.getPower()<<endl;
    

return 0;
}