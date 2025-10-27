#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char action;
    double number1, number2;
    cout << "Enter two numbers: " << endl;
    cin >> number1;
    cin >> number2;
    cout << "Enter action: (+,-,*,/,^,s(from first number))" << endl;
    cin >> action;

    switch (action) {
        case '+':
            cout << number1 + number2;
            break;
        case '-':
            cout << number1 - number2;
            break;
        case '*':
            cout << number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                cout << number1 / number2;
            } else {
                cout << "Number cannot be divided by zero!";
            }
            break;
        case '^':
            cout << pow(number1, number2);
            break;
        case 's':
        case 'S':
            if (number1 > 0) {
                cout << sqrt(number1);
            } else {
                cout << "Negative number!";
            }
            break;
        default:
            cout << "Invalid action!";
            break;
    }
    
    return 0;
}