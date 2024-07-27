#include <iostream>


class Person {
public:
    
    virtual void greet() const = 0;
};


class Student : public Person {
public:
    
    void greet() const override {
        std::cout << "Student says: Hello!" << std::endl;
    }
};


class Teacher : public Person {
public:
    
    void greet() const override {
        std::cout << "Teacher says: Good morning!" << std::endl;
    }
};

int main() {
    
    Student student;
    Teacher teacher;

    
    const Person* person1 = &student;
    const Person* person2 = &teacher;

    
    std::cout << "Greetings:" << std::endl;
    person1->greet();
    person2->greet();

    return 0;
}

