#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    double salary;

public:
    void getdata(const std::string& name, int age, double salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void displaydata() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << std::endl;
    }

    virtual double bonus() const {
        return salary * 0.1;
    }
};

class Admin : public Person {
public:
    double bonus() const override {
        return salary * 0.15;
    }
};

class Account : public Person {
public:
    double bonus() const override {
        return salary * 0.12;
    }
};

class Master : public Admin, public Account {
public:
    void getdata(const std::string& name, int age, double salary) {
        Admin::getdata(name, age, salary);
    }

    void displaydata() const {
        Admin::displaydata();
    }

    double bonus() const override {
        
        return std::max(Admin::bonus(), Account::bonus());
    }
};

int main() {
    Master masterEmployee;
    masterEmployee.getdata("Alice", 30, 50000);
    masterEmployee.displaydata();
    std::cout << "Bonus: " << masterEmployee.bonus() << std::endl;

    return 0;
}
