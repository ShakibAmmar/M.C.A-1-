#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName; 
    int accountNumber;     
    string accountType;    
    double balance;        

public:
    
    void initialize(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

  
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: $" << amount << endl;
                cout << "New Balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance. Withdrawal of $" << amount << " failed." << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

  
    void displayAccountDetails() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account; 

    
    account.initialize("John Doe", 123456, "Savings", 1000.00);
    account.displayAccountDetails();

    account.deposit(500.00);

    account.withdraw(200.00);
    
    account.withdraw(1500.00);

    return 0;
}