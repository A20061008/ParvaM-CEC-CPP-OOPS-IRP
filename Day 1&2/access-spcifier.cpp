#include<iostream>
using namespace std;
class Bank
{
    private:
        int balance=0;
    public:
        //Member of class
        string custName,custEmail;
        int acNumber;


        void createAccount(string cName,string cEmail)
        {
            custName=cName;
            custEmail=cEmail;

        }

        void displayInfo()
        {
            cout <<"Customer Name: "<<custName<<endl;
            cout <<"Customer Email: "<<custEmail<<endl;
        }

       //setter
        void addBalance(int account, int amount)
        {
            balance += amount;
            cout<<"the amount has been deposited successfully!"<<endl;
        }
        //setter
        void withdrawAmount(int account, int amount){
             balance -= amount;
             cout<<"the amount has been withdraw successfully!"<<endl;

        }

        void checkBalance()
        {
            cout << "Bank Balence: " <<balance<<endl;
        }
};


int main()
{
    Bank cust1; //Object Declared
    string name,email;
    int acNum,amount;
    //cust.balance=8000;//we can't assign the value of the private member
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your Email id:";
    cin >> email;
    cout<<"enter account number";
    cin>>acNum;
    cout<<"enter amount to be deposited";
    cin>>amount;



    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNum,amount);
    cust1.checkBalance();
    
    cout<<"enter the amount to be withdraw";
    cin>>amount;
    cust1.withdrawAmount(acNum,amount);
    cust1.checkBalance();
  
}