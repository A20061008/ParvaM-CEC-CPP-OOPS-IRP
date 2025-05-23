#include<iostream>
using namespace std;

class Add{
    public:
        //Member Data
        int num1, num2;
        float res;

        //Declared Constructor & It is also a Default Constructor
        //Ctrl + ?:Comment
        //Calculate(){
        //    num1=5;
        //    num2=10; 
        //}

        //Member Function
        void showOutput(){
            cout<<"Addition:"<<num1+num2<<endl;
            cout<<"Subtraction:"<<num1-num2<<endl;
            cout<<"Multiplication:"<<num1*num2<<endl;
            cout<<"Quotient:"<<num1/num2<<endl;
            cout<<"Remainder:"<<num1%num2<<endl;
        }
};

int main(){
    //Initializing the default value using Constructor automatically when object is declared
    Add a1; //Object

    //Assigning the value to the data members
    Add a2;
    a2.num1=25;
    a2.num2=30;
    a1.showOutput();
    a2.showOutput();
}