#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float amount){
            employeeID=id;
            employeeName=name;
            experience=exp;
            this->salary=salary;
        }

        void showDetails(){
            cout<<"The employee with name "<<employeeName<<" bearing "<<employeeID<<" having "
            <<experience<<" years of experience and recieves a salary of "<<salary<<" /- "<<endl;
        }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout<<"Enter your Name, Employee-ID, Years of Experience & Salary:";
    cin>>empName>>empID>>empExp>>empSalary;

    Employee emp1; //object created
    Employee *empPtr=&emp1; //Pointer is pointing/refering to the object emp1

    //Using the pointer we are assigning the value to the object using pointer Dereferencing & Dot Operator
    (*empPtr).addDetails(empID, empName, empExp, empSalary);
    (*empPtr).showDetails();

    //Using the pointer we are assigning the value to the object using pointer Dereferencing & Dot Operator
    empPtr->addDetails(empID, empName, empExp, empSalary);
    empPtr->showDetails();

    //Dynamically Allocating memory for the pointer object(No object referred)
    //Syntax:className *pointer_name=new className
    Employee *ptrEmp=new Employee; 
    ptrEmp->addDetails("PM123","Amruth",3,50000.00);
    ptrEmp->showDetails();
    //emp1.addDetails<==>(*empPtr).addDetails<==>empPtr->addDetails
}