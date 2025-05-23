#include<iostream>
using namespace std;

class Car{
    //Data
    public:
    string brand, model, variant, fuel_type;
    int year;
    float price

    //Member Function
        void start(){
            cout<<model<<"started!"<<endl;
        }

        void park(){
            cout<<model<<"parked!"<<endl;
        }

        void stop(){
            cout<<model<<"stopped!"<<endl;
        }

        void display(){
            cout<<"Brand:"<<brand<<endl;
            cout<<"Model:"<<model<<endl;
            cout<<"variant:"<<variant<<endl;
            cout<<"Fuel Type:"<<fuel_type<<endl;
            cout<<"Launch Year:"<<year<<endl;
            cout<<"Price:"<<price<<endl;
        }
};

int main(){
    Car c1; //Object Created for the class Car
    c1.brand="Toyota";
    c1.model="Toyota";
    c1.variant="Toyota";
    c1.fuel_type="Toyota";
    c1.year="Toyota";
    c1.price="Toyota";
    c1.start();
    c1.park();
    c1.brand="Toyota";
    c1.brand="Toyota";
}
