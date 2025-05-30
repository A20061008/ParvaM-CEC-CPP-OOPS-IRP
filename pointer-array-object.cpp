#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;
        string skills[];

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

class Skill:public Employee{
    private:
        int skillCount;
        string skills[];

    public:
        void setskills(int count){
            skillCount=count;
            cout<<"Enter the "<<count<<"technologies you're familiar with:"<<endl;
            for(int i=0;i<count;i++){ //Array Initialization
                cout<<"Skill"<<i+1<<":";
                cin>>skills[i]
            }
        }

        void showSkills(){
            cout<<"Skills known:"<<endl;
            for(int i=0;i<skillcount;i++){ //Display the content of Skill Array
                cout<<i+1<<"-"<<skills[i]<<endl;
            }
        }
};

int main(){
    string emp_name,emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout<<"Enter the following details of the Employee:"<<endl;
    cout<<"Employee ID, Name, Years of Experience, Salary"<<endl;
    cin>>emp_id>>emp_name>>emp_exp>>emp_salary;
}