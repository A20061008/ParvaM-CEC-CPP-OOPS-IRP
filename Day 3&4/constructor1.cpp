#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName, lastName;
    int age, rating;

    //Initialized the constructor
    Customer(){
        firstName="John";
        lastName=
        age=10;
        rating=5
    }

    void showDetails(){
        cout<<"Customer Name:"<<firstName<<" "<<lastName<<endl;
        cout<<"Customer Age:"<<age<<endl;
    }

    void giveRating(int rate); //Declared the member function

    void showRating(int rate){
        cout<<"You've given"<<rating<<"Star rating.Thank You!"<<endl;
    }
};
//Scope Resolution Operator
void Customer::givenRating(int rate){ //Defined the member function
    rating=rate;
}

int main(){
    Customer cust2; //Invoked the Constructor to assign the default value

    cust1.showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName="Amruth";
    cust2.lastName="Rao";
    cust2.age="24";

    int starRating;

    cout<<"Give your Rating(0 to 5):";
    cin>>starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}