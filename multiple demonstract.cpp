#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
   
    Person() : name("Unknown"), age(0), address("Unknown") {
        std::cout << "Default constructor called" << std::endl;
    }

    
    Person(std::string n) : name(n), age(0), address("Unknown") {
        std::cout << "Constructor with name parameter called" << std::endl;
    }

    
    Person(std::string n, int a) : name(n), age(a), address("Unknown") {
        std::cout << "Constructor with name and age parameters called" << std::endl;
    }

    
    Person(std::string n, int a, std::string addr) : name(n), age(a), address(addr) {
        std::cout << "Constructor with name, age, and address parameters called" << std::endl;
    }

    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    }
};

int main() {
   
    Person p1;                           
    Person p2("Alice");                  
    Person p3("Bob", 25);                
    Person p4("Charlie", 30, "New York");

    
    p1.display();
    p2.display();
    p3.display();
    p4.display();

    return 0;
}

