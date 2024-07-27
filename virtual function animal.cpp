#include <iostream>


class Animal {
public:
    
    virtual void speak() const = 0; 
};


class Cat : public Animal {
public:
    
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};


class Dog : public Animal {
public:
    
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    
    Cat cat;
    Dog dog;

    
    Animal* animal1 = &cat;
    Animal* animal2 = &dog;

    
    animal1->speak();
    animal2->speak();

    return 0;
}

