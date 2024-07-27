#include <iostream>
#include <string>

class Person {
public:
    
    std::string name;
    int age;

    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
   
    Person person;

   
    Person* ptr = &person;

    
    ptr->name = "Alice";
    ptr->age = 30;

    
    ptr->display();

    return 0;
}

