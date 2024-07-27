#include <iostream>
#include <string>

using namespace std;


class Employee {
protected:
    string name;
    int employeeID;

public:
    void setEmployeeInfo(string n, int id) {
        name = n;
        employeeID = id;
    }

    void displayEmployeeInfo() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};


class FullTimeEmployee : public Employee {
protected:
    float monthlySalary;

public:
    void setFullTimeSalary(float salary) {
        monthlySalary = salary;
    }

    float getFullTimeSalary() const {
        return monthlySalary;
    }
};


class PartTimeEmployee : public Employee {
protected:
    float hourlyWage;
    int hoursWorked;

public:
    void setPartTimeDetails(float wage, int hours) {
        hourlyWage = wage;
        hoursWorked = hours;
    }

    float getPartTimeSalary() const {
        return hourlyWage * hoursWorked;
    }
};


class Salary : public FullTimeEmployee, public PartTimeEmployee {
public:
    void displaySalary() {
        
        cout << "Full-Time Employee Salary:" << endl;
        FullTimeEmployee::displayEmployeeInfo();
        cout << "Monthly Salary: $" << getFullTimeSalary() << endl;

        
        cout << "\nPart-Time Employee Salary:" << endl;
        PartTimeEmployee::displayEmployeeInfo();
        cout << "Hourly Wage: $" << hourlyWage << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: $" << getPartTimeSalary() << endl;
    }
};

int main() {
    Salary employeeSalary;

    
    employeeSalary.FullTimeEmployee::setEmployeeInfo("Alice Johnson", 1001);
    employeeSalary.FullTimeEmployee::setFullTimeSalary(5000);

  
    employeeSalary.PartTimeEmployee::setEmployeeInfo("Alice Johnson", 1001);
    employeeSalary.PartTimeEmployee::setPartTimeDetails(20, 80); // $20/hour for 80 hours

    
    employeeSalary.displaySalary();

    return 0;
}
