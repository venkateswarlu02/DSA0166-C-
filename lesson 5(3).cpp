#include <iostream>

// Base class Number
class Number {
protected:
    int num;

public:
    // Function to get the number
    void getNumber() {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }

    // Function to set the number (for derived classes)
    void setNumber(int n) {
        num = n;
    }

    // Function to get the number (for derived classes and main)
    int getNum() const {
        return num;
    }
};

// Derived class Square inheriting from Number
class Square : public Number {
public:
    // Function to calculate and display the square of the number
    void calculateSquare() {
        int square = num * num;
        std::cout << "The square of " << num << " is: " << square << std::endl;
    }
};

// Derived class Cube inheriting from Number
class Cube : public Number {
public:
    // Function to calculate and display the cube of the number
    void calculateCube() {
        int cube = num * num * num;
        std::cout << "The cube of " << num << " is: " << cube << std::endl;
    }
};

int main() {
    // Creating a Square object
    Square squareObj;
    // Creating a Cube object
    Cube cubeObj;

    // Getting input for the number
    squareObj.getNumber();
    
    // Setting the same number in the cube object
    cubeObj.setNumber(squareObj.getNum());

    // Calculating and displaying the square of the number
    squareObj.calculateSquare();

    // Calculating and displaying the cube of the number
    cubeObj.calculateCube();

    return 0;
}
