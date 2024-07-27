#include <iostream>


class Employee {
public:
    
    virtual double calculatePay() const = 0; 
};


class Manager : public Employee {
private:
    double salary;
    double bonus;

public:
    Manager(double sal, double bon) : salary(sal), bonus(bon) {}

    
    double calculatePay() const override {
        return salary + bonus;
    }
};


class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    
    Manager manager(5000.0, 1000.0);
    Engineer engineer(50.0, 160);

    
    Employee* emp1 = &manager;
    Employee* emp2 = &engineer;

    
    std::cout << "Manager's Pay: $" << emp1->calculatePay() << std::endl;
    std::cout << "Engineer's Pay: $" << emp2->calculatePay() << std::endl;

    return 0;
}

