#include <iostream>
using namespace std;

// Function prototypes
void checkBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {
    double balance = 0.0; // Initial balance set to zero
    int choice;

    // ATM menu for user interaction
    do {
        cout << "\nATM System Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Funds\n";
        cout << "3. Withdraw Funds\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);  // Call by value
                break;
            case 2:
                deposit(balance);  // Call by reference
                break;
            case 3:
                withdraw(balance); // Call by reference
                break;
            case 4:
                cout << "Exiting the system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to check balance (Call by Value)
void checkBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}

// Function to deposit money (Call by Reference)
void deposit(double &balance) {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount; // Update the balance
        cout << "Successfully deposited $" << amount << ".\n";
    } else {
        cout << "Invalid amount. Please enter a positive value.\n";
    }
}

// Function to withdraw money (Call by Reference)
void withdraw(double &balance) {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount; // Deduct from balance
            cout << "Successfully withdrew $" << amount << ".\n";
        } else {
            cout << "Insufficient funds! Your current balance is: $" << balance << endl;
        }
    } else {
        cout << "Invalid amount. Please enter a positive value.\n";
    }
}

