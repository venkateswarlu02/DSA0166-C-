#include <iostream>
#include <string>


class Person {
protected:
    std::string name;
    int age;

public:
    
    virtual void getData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    virtual void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    virtual double bonus() const = 0; 
};


class Admin : virtual public Person {
protected:
    double adminSalary;

public:
    void getData() override {
        Person::getData();
        std::cout << "Enter admin salary: ";
        std::cin >> adminSalary;
    }

    void displayData() const override {
        Person::displayData();
        std::cout << "Admin Salary: " << adminSalary << std::endl;
    }

    double bonus() const override {
        return adminSalary * 0.1; 
    }
};


class Account : virtual public Person {
protected:
    double accountSalary;

public:
    void getData() override {
        Person::getData();
        std::cout << "Enter account salary: ";
        std::cin >> accountSalary;
    }

    void displayData() const override {
        Person::displayData();
        std::cout << "Account Salary: " << accountSalary << std::endl;
    }

    double bonus() const override {
        return accountSalary * 0.15; 
    }
};


class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData();
        Account::getData();
    }

    void displayData() const override {
        Admin::displayData();
        Account::displayData();
    }

    double bonus() const override {
        return Admin::bonus() + Account::bonus(); 
    }
};

int main() {
    
    Master master;

    
    master.getData();

    
    std::cout << "\nEmployee Information:" << std::endl;
    master.displayData();

    
    std::cout << "Total Bonus: " << master.bonus() << std::endl;

    return 0;
}
