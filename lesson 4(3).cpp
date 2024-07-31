#include <iostream>
#include <string>


class Employee {
protected:
    std::string name;
    int emp_id;
    double basic_salary;

public:
    
    Employee(const std::string &name, int emp_id, double basic_salary)
        : name(name), emp_id(emp_id), basic_salary(basic_salary) {}

    
    void displayEmployeeDetails() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << emp_id << std::endl;
        std::cout << "Basic Salary: " << basic_salary << std::endl;
    }
};


class Pay : public Employee {
private:
    double gross_pay;
    double net_pay;
    double hra; 
    double da;  
    double tax; 

public:
   
    Pay(const std::string &name, int emp_id, double basic_salary)
        : Employee(name, emp_id, basic_salary) {
        calculatePay();
    }

    
    void calculatePay() {
        hra = 0.2 * basic_salary;  
        da = 0.1 * basic_salary;   
        tax = 0.05 * basic_salary; 

        gross_pay = basic_salary + hra + da;
        net_pay = gross_pay - tax;
    }

    
    void displayPayDetails() const {
        displayEmployeeDetails();
        std::cout << "Gross Pay: " << gross_pay << std::endl;
        std::cout << "Net Pay: " << net_pay << std::endl;
    }
};

int main() {
    
    Pay employee("John Doe", 12345, 50000);

    
    std::cout << "Employee Pay Details:" << std::endl;
    employee.displayPayDetails();

    return 0;
}
