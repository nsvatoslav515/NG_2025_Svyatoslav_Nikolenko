#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char action;

    cout << "Enter one number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter action (+, -, *, /): ";
    cin >> action;

    cout << number1 << " " << action << " " << number2 << " = ";

    if (action == '+') {
        cout << number1 + number2;
    }
    else if (action == '-') {
        cout << number1 - number2;
    }
    else if (action == '*') {
        cout << number1 * number2;
    }
    else if (action == '/') {
        if (number2 != 0) {
            cout << number1 / number2;
        } else {
            cout << "Error: Division by zero!";
        }
    } else {
        cout << "Error: Invalid operator";
    }
    return 0;
}
