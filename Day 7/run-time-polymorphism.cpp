#include<iostream>
using namespace std;

class Base{
    public:
        void showBase(){
            cout<<"Base member function has been called!"<<endl;
        }
};

class Derived:public Base{
    public:
        void showBase(){
            cout<<"Derived member function has been called!"<<endl;
            Base::showBase(); //Calling the member of Base class using Scope resolution
        }
};

//Example 2:
class Animal{ //Base class
    public:
        void makeSound(){
            cout<<"Animal makes some sound!"<<endl;
        }
};

class Dog:public Animal{ //Derived Class (Animal->Dog)
    public:
        void makeSound(){ //Function Overriding(same member fuction name)
            Animal::makeSound(); //Calling the Animal class - member function
            cout<<"Fog barks!"<<endl;
        }
};

class Cat:public Animal{
    public:
        void makeSound(){ //Function Overriding (same member function name)
            cout<<"Cat meows!"<<endl;
        }
};

int main(){
    //Base b1;
    //b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}