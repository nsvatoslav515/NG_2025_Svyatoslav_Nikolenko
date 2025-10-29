#include <iostream>

using namespace std;

int main()
{
    int choice, number;
    
    cout << "1 or 2? ";
    cin >> choice;
    cout << "Quantity? ";
    cin >> number;
    
    if (choice == 1) {
        for (int i = 0; i < number; i++) {
            cout << "\n";
            for (int j = 0; j < number; j++) {
                cout << '*';
            } 
        }
    } else {
        for (int i = 0; i < number; i++) {
            cout << "\n";
            for (int j = 0; j <= i; j++) {
                cout << '*';
            }
        }
    }
}