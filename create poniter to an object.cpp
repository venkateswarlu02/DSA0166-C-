#include <iostream>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person* personPtr = new Person("John Doe", 30);
    personPtr->display();
    delete personPtr;

    return 0;
}

