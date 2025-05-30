#include<iostream>
#include<fstream>
using namespace std;

class Car{
    private:
        string brand, model, varient, features[10];
        int year, price;

    public:
        void addCarDetails(string carBrand, string carModel, string carVarient, int year, int price){
            brand=carBrand;
            model=carModel;
            varient=carVarient;
            this->year=year;
            this->price=price;
        }

        void addCarFeatures(int count){
            cout<<"Enter the "<<count<<"features of the car:";
            for(int i=0;i<count;i++){
                cin.ignore();
                getline(cin, features[i]); //Can enter multiple words along with spaces
            }
        }

        void storeCarDetails(){
            ofstream store("car_details");
            store<<"The Car Details are as follows:"<<endl;
            store<<"Car Brand:"<<endl;
            store<<"Car model:"<<endl;
            store<<"Car varient:"<<endl;
            store<<"Launch year:"<<endl;
            store<<"Offer price:Rs."<<endl;
            store<<"Car has these features:"<<endl;
            for(int i=0;i<featurecount;i++){
                store<<"\t"<<i+1<<". "<<features[i]<<endl;
            }
            store<<"-----------------------------------";
        }
};

int main(){
    string car_brand, car_model, car_varient, car_features[10];
    int features_count, launch_year, launch_price;

    cout<<"Enter the Car Details:"<<endl;
    cout<<"Brand, Model, Varient, Launch Year, Launch Price:"<<endl;
    cout<<"Ex:Tata,Curvv,(Petrol/Diesel/EV),2025,1500000";
    cin>>car_brand>>car_model>>car_varient>>launch_year>>launch_price;

    cout<<"Enter the Number of features:"<<endl;
    cin>>features_count;

    Car car1;
    car1.addCarDetails(car_brand, car_model, car_varient, launch_year, launch_price);
    car1.addCarFeatures(features_count);
    car1.storeCarDetails();
}