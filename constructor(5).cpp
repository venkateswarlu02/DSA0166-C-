#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    std::string accountNumber;
    double balance;

public:
    
    BankAccount(const std::string& holder, const std::string& number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
        std::cout << "Bank account for " << accountHolder << " with account number " << accountNumber << " created.\n";
    }

   
    ~BankAccount() {
        std::cout << "Bank account for " << accountHolder << " with account number " << accountNumber << " destroyed.\n";
    }

   
    void display() const {
        std::cout << "Account Holder: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: $" << balance << "\n";
    }

   
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into account " << accountNumber << ". New balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " from account " << accountNumber << ". New balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }
};

int main() {
    
    BankAccount account1("Alice", "123456789", 1000.0);
    account1.display();

    
    account1.deposit(500.0);
    account1.withdraw(200.0);

    // Creating another BankAccount object
    BankAccount account2("Bob", "987654321", 500.0);
    account2.display();

    // Performing some transactions
    account2.deposit(150.0);
    account2.withdraw(100.0);

    return 0;
}

