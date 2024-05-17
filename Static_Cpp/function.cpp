#include <iostream>
using namespace std;

class Hero {
    public:
    static int TimeToComplete;

    static int Deku(){
        return TimeToComplete;
    }
};

int Hero::TimeToComplete = 20;


int main(){
    // cout<<Hero::TimeToComplete;
    cout<<Hero::Deku();
    return 0;
}