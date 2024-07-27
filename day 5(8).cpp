#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int emp_id;
    double basic_salary;

public:
    Employee(const std::string& name, int emp_id, double basic_salary)
        : name(name), emp_id(emp_id), basic_salary(basic_salary) {}

    virtual ~Employee() {}

    virtual void display() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << emp_id << std::endl;
        std::cout << "Basic Salary: $" << basic_salary << std::endl;
    }
};

class PayCalculator : public Employee {
private:
    double gross_pay;
    double net_pay;

public:
    PayCalculator(const std::string& name, int emp_id, double basic_salary)
        : Employee(name, emp_id, basic_salary) {
        calculatePay();
    }

    void calculatePay() {
        // Assuming some fixed percentages for allowances and deductions
        double hra = basic_salary * 0.2; // House Rent Allowance is 20% of basic salary
        double da = basic_salary * 0.1;  // Dearness Allowance is 10% of basic salary
        double tax = basic_salary * 0.05; // Tax is 5% of basic salary

        gross_pay = basic_salary + hra + da;
        net_pay = gross_pay - tax;
    }

    void display() const override {
        Employee::display();
        std::cout << "Gross Pay: $" << gross_pay << std::endl;
        std::cout << "Net Pay: $" << net_pay << std::endl;
    }
};

int main() {
    std::string name;
    int emp_id;
    double basic_salary;

    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);
    std::cout << "Enter employee ID: ";
    std::cin >> emp_id;
    std::cout << "Enter basic salary: ";
    std::cin >> basic_salary;

    PayCalculator employee(name, emp_id, basic_salary);
    employee.display();

    return 0;
}
