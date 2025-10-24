#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double number1, number2;
    char action;

    cout << "Enter one number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter action (+, -, *, /, ^, s): ";
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
    } else if (action == '^') {
        cout << pow(number1, number2);
    } 
    else if (action == 's' || action == 'S') {
        if (number1 >= 0) {
            cout << sqrt(number1);
        } else {
            cout << "Error: Cannot calculate square root of negative number!";
        }
    } else {
        cout << "Error: Invalid operator";
    }
    return 0;
}
