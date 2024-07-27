#include <iostream>


class Vehicle {
public:
    
    virtual void drive() const = 0; 
};


class Car : public Vehicle {
public:
    
    void drive() const override {
        std::cout << "Car is driving on the road." << std::endl;
    }
};


class Truck : public Vehicle {
public:
    
    void drive() const override {
        std::cout << "Truck is driving on the highway." << std::endl;
    }
};

int main() {
    
    Car car;
    Truck truck;

    
    const Vehicle* vehicle1 = &car;
    const Vehicle* vehicle2 = &truck;

    
    vehicle1->drive();
    vehicle2->drive();

    return 0;
}

