#include <iostream>


class Animal {
public:
    
    virtual void move() const = 0; 
};


class Bird : public Animal {
public:
    
    void move() const override {
        std::cout << "Bird is flying." << std::endl;
    }
};


class Fish : public Animal {
public:
   
    void move() const override {
        std::cout << "Fish is swimming." << std::endl;
    }
};

int main() {
    
    Bird bird;
    Fish fish;

    
    const Animal* animal1 = &bird;
    const Animal* animal2 = &fish;

    
    std::cout << "Movement of animals:" << std::endl;
    animal1->move();
    animal2->move();

    return 0;
}

