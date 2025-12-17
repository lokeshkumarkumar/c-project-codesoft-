#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Simple Calculator\n";

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error: Cannot divide by zero.\n";
            return 0;
        }
        result = num1 / num2;
    }
    else {
        cout << "Invalid operator.\n";
        return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}