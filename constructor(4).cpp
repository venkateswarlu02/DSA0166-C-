#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    
    Car(const std::string& carMake, const std::string& carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
        std::cout << "Car " << make << " " << model << " " << year << " created.\n";
    }

    
    ~Car() {
        std::cout << "Car " << make << " " << model << " " << year << " destroyed.\n";
    }

    
    void display() const {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << "\n";
    }
};

int main() {
   
    Car car1("Toyota", "Camry", 2020);
    car1.display();

    
    Car car2("Honda", "Civic", 2018);
    car2.display();

    return 0;
}

