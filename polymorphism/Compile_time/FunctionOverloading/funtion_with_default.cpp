#include <iostream>
using namespace std;

//Area of circle
int Area(int l, int b){
    return l*b;
}

//Area of Rectangle
double Area(double radius, double pi=3.14){
    return pi*radius*radius;
}

int main(){
    int l=2,b=5;
    double radius = 2.5;
    cout<<"Area of rectangle : "<<Area(l,b)<<endl;
    cout<<"Area of circle : "<<Area(radius);
}