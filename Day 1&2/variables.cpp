#include<iostream>
using namespace std;

int main(){
    //Declare the variables with different datatype
    string name, college, branch, usn;
    char section;
    int age, sem;
    bool isStudent;
    float height;

    name="Amruth";
    section='A';
    age=24;
    college="CEC";
    branch="AI/ML";
    usn="1CE24AI008";
    sem=2;
    isStudent=true;
    height=5.2;

    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Section"<<section<<endl;
    cout<<"College:"<<college<<endl;
    cout<<"Branch:"<<branch<<endl;
    cout<<"USN:"<<usn<<endl;
    cout<<"Sem:"<<sem<<"Is a Student"<<isStudent<<endl;
    //Shift + Alt + bottom arrow - Clone
    //Ctrl + Shift + ~: Open Terminal
    //g++ variables.cpp
}