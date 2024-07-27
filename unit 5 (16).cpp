#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(const string& n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Account {
protected:
    int accountNumber;
    double balance;
public:
    void setAccountDetails(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", New Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccountDetails() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};


class Customer : public Person, public Account {
public:
    void displayCustomerDetails() const {
        displayPersonDetails();
        displayAccountDetails();
    }
};

int main() {
    
    Customer cust;

    
    cust.setPersonDetails("John Doe", 30);
    cust.setAccountDetails(123456, 1000.0);

    
    cout << "Customer Details:" << endl;
    cust.displayCustomerDetails();

    
    cust.deposit(500.0);
    cust.withdraw(200.0);
    cust.withdraw(1500.0);  

    
    cout << "\nUpdated Customer Details:" << endl;
    cust.displayCustomerDetails();

    return 0;
}
