#include <iostream>

using namespace std;

int main()
{
    int choice, number;
    
    cout << "Choose your image: " << endl;
    cout << "1 - Square" << endl;
    cout << "2 - Triangle" << endl;
    cin >> choice;
    
    cout << "Amount? ";
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