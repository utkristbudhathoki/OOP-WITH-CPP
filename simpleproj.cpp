#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal!" << endl;
        }
    }

    // Display account details
    void display() const {
        cout << "\n----- Account Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    string name;
    int accNo;
    double initialBalance;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(name, accNo, initialBalance);
    int choice;
    double amount;

    do {
        cout << "\n===== Bank Menu =====" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Display Account\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
