#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

double num1,num2;

void menu(){
    cout<<"\t\nMain Menu\n"<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Divide\n"<<"5. Module\n"<<"6. Exit\n"<<"Enter your choice : ";
}

template <typename T>
T add(T num1, T num2){
    return num1+num2;
}

template <typename T>
T subtract(T num1, T num2){
    return num1-num2;
}

template <typename T>
T multiply(T num1, T num2){
    return num1*num2;
}

template <typename T>
T divide(T num1, T num2){
    if(num2<0){
        cout<<"Error: Invalid zero enter";
    }
    return num1/num2;
}

template <typename T>
T module(T num1, T num2){
    if(num2<0){
        cout<<"Error: Invalid zero enter";
    }
    return num1%num2;
}

void value(){
    cout<<"Enter your fist number : ";
    cin>>num1;
    cout<<"Enter your second number : ";
    cin>>num2;
}

int main(){
    int ch;
    do {
        menu();
        cin>>ch;
        switch(ch){
            case 1:
            value();
            cout<<"Addition : "<<add<double>(num1,num2);
            break;
            case 2:
            value();
            cout<<"Subtract : "<<subtract<double>(num1,num2);
            break;
            case 3:
            value();
            cout<<"Multiply : "<<multiply<double>(num1,num2);
            break;
            case 4:
            cout<<"Divide : "<<divide<double>(num1,num2);
            break;
            case 5:
            cout<<"Module : "<<module<int>(num1,num2);
            break;
            case 6:
            exit(0);
            break;
            default:
            cout<<"Invalid choice : Try again";
            break;
        }
    }while(ch!=6);
    return 0;
}