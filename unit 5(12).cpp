#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    void setDetails(int id, const string& name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void displayDetails() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    int numberOfEmployees;

    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    
    Employee* employees = new Employee[numberOfEmployees];

    
    for (int i = 0; i < numberOfEmployees; ++i) {
        int id;
        string name;
        double salary;

        cout << "Enter details for employee " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();  
        getline(cin, name);
        cout << "Salary: ";
        cin >> salary;

        employees[i].setDetails(id, name, salary);
    }

    
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numberOfEmployees; ++i) {
        employees[i].displayDetails();
    }

    
    delete[] employees;

    return 0;
}
