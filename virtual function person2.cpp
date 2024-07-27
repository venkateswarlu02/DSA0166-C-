#include <iostream>


class Person {
public:
    
    virtual void work() const = 0; 
};


class Employee : public Person {
public:
    
    void work() const override {
        std::cout << "Employee is working on tasks." << std::endl;
    }
};


class Manager : public Person {
public:
    
    void work() const override {
        std::cout << "Manager is coordinating and managing." << std::endl;
    }
};

int main() {
   
    Employee employee;
    Manager manager;

    
    const Person* person1 = &employee;
    const Person* person2 = &manager;

    
    std::cout << "Work activities:" << std::endl;
    person1->work();
    person2->work();

    return 0;
}

