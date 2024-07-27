#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n = "", int i = 0, double s = 0.0) : name(n), id(i), salary(s) {}

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setId(int i) {
        id = i;
    }

    int getId() const {
        return id;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary() const {
        return salary;
    }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string n = "", int i = 0, double s = 0.0, string d = "", double b = 0.0) 
        : Employee(n, i, s), department(d), bonus(b) {}

    void setDepartment(string d) {
        department = d;
    }

    string getDepartment() const {
        return department;
    }

    void setBonus(double b) {
        bonus = b;
    }

    double getBonus() const {
        return bonus;
    }

    void display() const {
        cout << "Manager Info: \n"
             << "Name: " << name << "\n"
             << "ID: " << id << "\n"
             << "Salary: " << salary << "\n"
             << "Department: " << department << "\n"
             << "Bonus: " << bonus << "\n";
    }
};

class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(string n = "", int i = 0, double s = 0.0, string sp = "", int h = 0) 
        : Employee(n, i, s), specialty(sp), hours(h) {}

    void setSpecialty(string sp) {
        specialty = sp;
    }

    string getSpecialty() const {
        return specialty;
    }

    void setHours(int h) {
        hours = h;
    }

    int getHours() const {
        return hours;
    }

    void display() const {
        cout << "Engineer Info: \n"
             << "Name: " << name << "\n"
             << "ID: " << id << "\n"
             << "Salary: " << salary << "\n"
             << "Specialty: " << specialty << "\n"
             << "Hours: " << hours << "\n";
    }
};

int main() {
    Manager manager("Alice", 1, 80000, "HR", 5000);
    Engineer engineer("Bob", 2, 60000, "Software", 40);

    manager.display();
    cout << endl;
    engineer.display();

    return 0;
}

