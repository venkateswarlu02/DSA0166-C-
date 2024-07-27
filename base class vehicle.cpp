#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string m = "", string mod = "", int y = 0) : make(m), model(mod), year(y) {}

    void setMake(string m) {
        make = m;
    }

    string getMake() const {
        return make;
    }

    void setModel(string mod) {
        model = mod;
    }

    string getModel() const {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(string m = "", string mod = "", int y = 0, int seatCap = 0, string fuel = "") 
        : Vehicle(m, mod, y), seatingCapacity(seatCap), fuelType(fuel) {}

    void setSeatingCapacity(int seatCap) {
        seatingCapacity = seatCap;
    }

    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    void setFuelType(string fuel) {
        fuelType = fuel;
    }

    string getFuelType() const {
        return fuelType;
    }

    void display() const {
        cout << "Car Info: \n"
             << "Make: " << make << "\n"
             << "Model: " << model << "\n"
             << "Year: " << year << "\n"
             << "Seating Capacity: " << seatingCapacity << "\n"
             << "Fuel Type: " << fuelType << "\n";
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(string m = "", string mod = "", int y = 0, double payload = 0.0, double towing = 0.0) 
        : Vehicle(m, mod, y), payloadCapacity(payload), towingCapacity(towing) {}

    void setPayloadCapacity(double payload) {
        payloadCapacity = payload;
    }

    double getPayloadCapacity() const {
        return payloadCapacity;
    }

    void setTowingCapacity(double towing) {
        towingCapacity = towing;
    }

    double getTowingCapacity() const {
        return towingCapacity;
    }

    void display() const {
        cout << "Truck Info: \n"
             << "Make: " << make << "\n"
             << "Model: " << model << "\n"
             << "Year: " << year << "\n"
             << "Payload Capacity: " << payloadCapacity << " kg\n"
             << "Towing Capacity: " << towingCapacity << " kg\n";
    }
};

int main() {
    Car car("Toyota", "Camry", 2020, 5, "Petrol");
    Truck truck("Ford", "F-150", 2019, 1000.0, 5000.0);

    car.display();
    cout << endl;
    truck.display();

    return 0;
}

