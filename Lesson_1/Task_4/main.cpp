#include <iostream>

using namespace std;

void first(int number) {
    for (int i = 0; i < number; i++) {
        
        cout << "\n";
        
        for (int j = 0; j < number; j++) {
            cout << '*';    
        }
    }
}

void second(int number) {
    for (int i = 0; i < number; i++) {
        
        cout << "\n";
        int count = i + 1;
        
        for (int j = 0; j < count; j++) {
            cout << '*';
        }
    }
}

int main()
{
    int choice;
    int number;
    cout << "What do you want? First image(1) or second(2)? ";
    cin >> choice;
    if (choice > 2) {
        cout << "Why?";
        return 0;
    }
    cin.ignore(1000, '\n');
    cout << "What quantity? ";
    cin >> number;
    if (number < 0) {
        cout << "For what?";
        return 0;
    }
    if (choice == 1) {
        first(number);
    } else {
        second(number);
    }
    
}