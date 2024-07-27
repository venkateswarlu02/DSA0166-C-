#include <iostream>
#include <string>

using namespace std;


class Manager {
private:
    string name;
    int age;
    double salary;

public:
    
    Manager() : name(""), age(0), salary(0.0) {}

    
    Manager(string n, int a, double s) : name(n), age(a), salary(s) {}

    
    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }
};

int main() {
    const int numManagers = 3; 
    Manager managers[numManagers]; 

    
    managers[0] = Manager("John Doe", 35, 5000);
    managers[1] = Manager("Jane Smith", 40, 6000);
    managers[2] = Manager("Michael Johnson", 45, 7000);

    
    cout << "Details of Managers:" << endl;
    for (int i = 0; i < numManagers; ++i) {
        managers[i].displayDetails();
    }

    return 0;
}

