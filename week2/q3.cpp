#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ElectricityBill {
protected:
    string customerNo;
    string customerName;
    int units;

public:
    void getData() {
        cin >> customerNo;
        cin.ignore();
        getline(cin, customerName);
        cin >> units;
    }

    virtual void calculateBill() {
    }

    void display() {
        cout << "Customer Details:" << endl;
        cout << "Customer Number: " << customerNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << units << endl;
    }
};

class Bill : public ElectricityBill {
public:
    void calculateBill() override {
        double rate;

        if (units <= 100)
            rate = 4.00;
        else if (units <= 300)
            rate = 4.50;
        else
            rate = 5.00;

        double amount = units * rate;

        display();
        cout << fixed << setprecision(2);
        cout << "Bill Amount: Rs. " << amount << endl;
    }
};

int main() {
    Bill b;
    ElectricityBill *ptr = &b;

    b.getData();
    ptr->calculateBill();

    return 0;
}
