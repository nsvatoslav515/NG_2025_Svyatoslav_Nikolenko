#include <iostream>

using namespace std;

int main()
{
    int accounts[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int choice;
    cout << "What do you want?" << endl;
    cout << "1.Information about account." << endl;
    cout << "2.Sum of accounts: " << endl;
    cout << "3.Withdraw money" << endl;
    cout << "4.Deposit money" << endl;
    
    cin >> choice;
    
    if (choice == 4) {
        int amount;
        int accountNumber;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "How much would you like to deposit?" << endl;
        cin >> amount;
        cout << "Completed! You deposited " << amount << " into account: " << accountNumber << endl;
        cout << "New balance: " << accounts[accountNumber - 1] + amount;
    }
    
    if (choice == 3) {
        int amount;
        int accountNumber;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "How much would you like to withdraw?" << endl;
        cin >> amount;
        if (accounts[accountNumber - 1] >= amount) {
            cout << "Money withdrawn: -" << amount << endl;
            cout << "Remaining balance: " << accounts[accountNumber - 1] - amount << endl;
        } else {
            cout << "Insufficient funds in this account." << endl;
        }
    }
    
    if (choice == 1) {
        int accountNumber;
        cout << "Enter account number: " << endl;
        cin >> accountNumber;
        cout << "Account balance: " << accounts[accountNumber - 1];
    }
    
    if (choice == 2) {
        int sum = 0;
        for (int counter = 0; counter < 10; counter++) {
            sum += accounts[counter];
        }
        cout << "Sum: " << sum << endl;
    }
}