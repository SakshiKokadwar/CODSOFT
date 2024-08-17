#include <iostream>
using namespace std;
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    char operation;
    double num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                divide(num1, num2);
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}


void add(double a, double b) {
    cout << "Result: " << (a + b) << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << (a - b) << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << (a * b) << endl;
}

void divide(double a, double b) {
    cout << "Result: " << (a / b) << endl;
}
