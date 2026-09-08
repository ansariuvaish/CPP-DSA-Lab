#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << a + b;
            break;

        case '-':
            cout << "Result: " << a - b;
            break;

        case '*':
            cout << "Result: " << a * b;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Division by zero";
            else
                cout << "Result: " << a / b;
            break;

        default:
            cout << "Error: Invalid operator";
    }

    return 0;
}
