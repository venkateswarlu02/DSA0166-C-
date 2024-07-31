#include <iostream>

// Base class Input1
class Input1 {
protected:
    int number1;

public:
    // Function to get the first number
    void getNumber1() {
        std::cout << "Enter the first number: ";
        std::cin >> number1;
    }
};

// Base class Input2
class Input2 {
protected:
    int number2;

public:
    // Function to get the second number
    void getNumber2() {
        std::cout << "Enter the second number: ";
        std::cin >> number2;
    }
};

// Derived class Sum inheriting from Input1 and Input2
class Sum : public Input1, public Input2 {
public:
    // Function to calculate and display the sum of the two numbers
    void calculateSum() {
        int sum = number1 + number2;
        std::cout << "The sum of " << number1 << " and " << number2 << " is: " << sum << std::endl;
    }
};

int main() {
    // Creating a Sum object
    Sum sumObj;

    // Getting input for both numbers
    sumObj.getNumber1();
    sumObj.getNumber2();

    // Calculating and displaying the sum
    sumObj.calculateSum();

    return 0;
}

