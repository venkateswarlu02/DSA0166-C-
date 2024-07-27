#include <iostream>
class Animal {
public:
    virtual void eat() const = 0; 
};
class Herbivore : public Animal {
public:
    void eat() const override {
        std::cout << "Herbivore is eating plants." << std::endl;
    }
};
class Carnivore : public Animal {
public:
    void eat() const override {
        std::cout << "Carnivore is eating meat." << std::endl;
    }
};
int main() {
    Animal* herbivore = new Herbivore();
    Animal* carnivore = new Carnivore();
    herbivore->eat();
    carnivore->eat();
    delete herbivore;
    delete carnivore;
    return 0;
}
