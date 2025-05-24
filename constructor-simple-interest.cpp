#include <iostream>
using namespace std;

class Interest {
private:
    int principal, term, rate;
    float totalInterest;
    float rateInPercent;

public:
    float simpleInterest;

    Interest() { // Default constructor
        principal = 0;
        term = 0;
        rate = 0;
        totalInterest = 0.0;
        rateInPercent = 0.0;
        simpleInterest = 0.0;
    }

    void setValues(int a, int y, int r) {
        principal = a;
        term = y;
        rate = r;
    }

    void setRateValueInteger(int rateInInterest) {
        rate = rateInInterest;
    }

    void setRateValueFloat(float rateInFloat) {
        rateInPercent = rateInFloat;
    }

    Interest(int p, int t, int r) { // Parameterized constructor
        setValues(p, t, r);
        setRateValueInteger(r);
        simpleInterest = (principal * term * rate) / 100.0;
        cout << "Simple interest for the following details:" << endl;
        cout << "Principal amount: " << principal << endl;
        cout << "No. of years (term): " << term << endl;
        cout << "Rate of interest (in integer): " << rate << endl;
        totalInterest = principal + simpleInterest;
        cout << "Total amount after interest: " << totalInterest << endl;
    }

    Interest(int p, int t, float rateInDecimal) { // Parameterized constructor
        setValues(p, t, 0); // Set rate to 0 as it's not used
        setRateValueFloat(rateInDecimal);
        simpleInterest = (principal * term * rateInPercent);
        cout << "Simple interest for the following details:" << endl;
        cout << "Principal amount: " << principal << endl;
        cout << "No. of years (term): " << term << endl;
        cout << "Rate of interest (in decimal): " << rateInPercent << endl;
        totalInterest = principal + simpleInterest;
        cout << "Total amount after interest: " << totalInterest << endl;
    }
};

int main() {
    int amount, year, rateOfInterest;
    float interestRate;

    cout << "Enter the principal amount, no. of years & rate of interest (integer): ";
    cin >> amount >> year >> rateOfInterest;
    Interest int2(amount, year, rateOfInterest);

    cout << "Enter the principal amount, no. of years & rate of interest (decimal): ";
    cin >> amount >> year >> interestRate;
    Interest int3(amount, year, interestRate);

    
}