#include <iostream>


class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal makes a sound" << std::endl;
    }
};


class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Dog barks" << std::endl;
    }
};


class Beagle : public Dog {
public:
    void speak() const override {
        std::cout << "Beagle barks loudly" << std::endl;
    }
};


class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Cat meows" << std::endl;
    }
};


class Persian : public Cat {
public:
    void speak() const override {
        std::cout << "Persian cat purrs" << std::endl;
    }
};

int main() {
    Animal* animals[4];
    
    animals[0] = new Beagle();
    animals[1] = new Persian();
    animals[2] = new Dog();
    animals[3] = new Cat();
    
    for (int i = 0; i < 4; ++i) {
        animals[i]->speak();  
    }
    
    
    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

    return 0;
}
