#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 0;
    }

    Circle(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    void displayArea() {
        cout << "Radius: " << fixed << setprecision(2) << getRadius() << endl;
        cout << "Area: " << fixed << setprecision(2) << 3.14159 * radius * radius << endl;
    }
};

int main() {
    double r1, r2;
    cin >> r1 >> r2;

    Circle c1;
    c1.setRadius(r1);

    cout << "Default Constructor" << endl;
    cout << "Circle:" << endl;
    c1.displayArea();

    Circle c2(r2);

    cout << "Parameterized Constructor" << endl;
    cout << "Circle:" << endl;
    c2.displayArea();

    return 0;
}
