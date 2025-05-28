#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;

    public:
        string pizzaType,size;
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout<<"Order the pizza by selecting your favourite pizza:"<<endl;
        }

        void bookPizza(){
            cout<<"Booking Pizza!"<<endl;
        }
        void bakePizza(string type){
            pizzaType=type;
            cout<<"Pizza Type:"<<pizzaType<<endl;
        }

        void addIngredient(string secret){
            secretIngredient=secret;
        }

        void confirmOrder(){
            cout<<"Order Confirmed!"<<endl;
        }

        bool checkPayment(int money, bool payment){
            price=money;
            isPaymentDone=payment;
            if(PaymentDone){
                cout<<"Amount Paid:Rs."<<price<<"Payment Successful!"<<end;
                confirmOrder();
                bookPizza();
                return true;
            }else{
                cout<<"Amount Due:Rs."<<price<<"Payment Pending!"<<endl;
                return false;
            }
        }

        void servePizza(int amount, bool paid, string typeOfPizza,string sizeOfPizza, string secretItem){
            if(checkPayment(amount, paid)){
                cout<<"Order Cancelled due to the pending payment!"<<endl;
            }
            bakePizza(typeOfPizza, sizeOfPizza);
            addIngredient(secretItem);
            cout<<"Pizza Served! Enjoy your Pizza";
        }
};

int main(){
    string pizType, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout<<"Enter the Pizza Type(Veg/Non-Veg), Size(Regular/Medium/Large):";
    cin>>pizType>>size;

    pizzaAmount=399;
    cout<<"Did the Pay the amount(Type 'True')"
    cin>>amountPaid;

    customer1.servePizza(pizzaAmount, amountPaid, pizType, size, secreting);
}