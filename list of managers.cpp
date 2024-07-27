#include <iostream>
#include <string>

class Manager {
private:
    std::string name;
    int age;
    std::string department;

public:
    
    Manager() : name(""), age(0), department("") {}

    // Parameterized constructor
    Manager(const std::string &name, int age, const std::string &department)
        : name(name), age(age), department(department) {}

    // Function to set manager details
    void setDetails(const std::string &name, int age, const std::string &department) {
        this->name = name;
        this->age = age;
        this->department = department;
    }

    // Function to display manager details
    void displayDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Department: " << department << std::endl;
    }
};

int main() {
    int numManagers;

    std::cout << "Enter the number of managers: ";
    std::cin >> numManagers;
    std::cin.ignore(); // To consume the newline character left by std::cin

    // Dynamically create an array of Manager objects
    Manager *managers = new Manager[numManagers];

    // Input details for each manager
    for (int i = 0; i < numManagers; ++i) {
        std::string name;
        int age;
        std::string department;

        std::cout << "Enter details for manager " << (i + 1) << ":\n";
        std::cout << "Name: ";
        std::getline(std::cin, name);
        std::cout << "Age: ";
        std::cin >> age;
        std::cin.ignore(); // To consume the newline character left by std::cin
        std::cout << "Department: ";
        std::getline(std::cin, department);

        managers[i].setDetails(name, age, department);
    }

    // Display details of all managers
    std::cout << "\nList of Managers:\n";
    for (int i = 0; i < numManagers; ++i) {
        managers[i].displayDetails();
    }

    // Clean up dynamically allocated array
    delete[] managers;

    return 0;
}

