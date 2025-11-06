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
        for (int row = 0; row < number; row++) {
            cout << endl;
            for (int col = 0; col < number; col++) {
                cout << '*';
            } 
        }
    } else {
        for (int row = 0; row < number; row++) {
            cout << endl;
            for (int col = 0; col <= row; col++) {
                cout << '*';
            }
        }
    }
}