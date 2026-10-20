
#include <iostream>
using namespace std; // Simple calculator program that performs basic arithmetic operations
// to start = g++ Calculator.cpp -o calculator.exe
// to run = ./calculator.exe
int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;

        case '-':
            cout << "Result: " << num1 - num2;
            break;

        case '*':
            cout << "Result: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Cannot divide by zero!";
            }
            break;

        default:
            cout << "Invalid operation!";
    }

    cout << endl;
    return 0;
}
