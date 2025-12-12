#include <iostream>

using namespace std;

int main()
{
    int accountNumber;
    cout << "Enter account number: " << endl;
    cin >> accountNumber;

    int accounts[10] = {0,0,0,0,0,0,0,0,0,0};
    int choice;
    
    cout << "What do you want?" << endl;
    cout << "1. Information about account." << endl;
    cout << "2. Sum of accounts: " << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Deposit money" << endl;
    
    cin >> choice;
    
    switch (choice) {
        case 1: {
            cout << "Account balance: " << accounts[accountNumber - 1];
            break;
        }
        
        case 2: {
            int sum = 0;
            for (int counter = 0; counter < 10; counter++) {
                sum += accounts[counter];
            }
            cout << "Sum: " << sum << endl;
            break;
        }
        
        case 3: {
            int amount;
            cout << "How much would you like to withdraw?" << endl;
            cin >> amount;
            if (accounts[accountNumber - 1] >= amount) {
                cout << "Money withdrawn: -" << amount << endl;
                cout << "Remaining balance: " << accounts[accountNumber - 1] - amount << endl;
            } else {
                cout << "Insufficient funds in this account." << endl;
            }
            break;
        }
        
        case 4: {
            int amount;
            cout << "How much would you like to deposit?" << endl;
            cin >> amount;
            cout << "Completed! You deposited " << amount << " into account: " << accountNumber << endl;
            cout << "New balance: " << accounts[accountNumber - 1] + amount;
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}