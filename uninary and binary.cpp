#include <iostream>

// Unary Operator Overloading Example
class NumberUnary {
private:
    int value;
public:
    NumberUnary(int v = 0) : value(v) {}

    // Overloading unary minus operator
    NumberUnary operator-() const {
        return NumberUnary(-value);
    }

    void display() const {
        std::cout << "Unary - Value: " << value << std::endl;
    }
};

// Binary Operator Overloading Example
class NumberBinary {
private:
    int value;
public:
    NumberBinary(int v = 0) : value(v) {}

    // Overloading binary plus operator
    NumberBinary operator+(const NumberBinary &other) const {
        return NumberBinary(value + other.value);
    }

    void display() const {
        std::cout << "Binary - Value: " << value << std::endl;
    }
};

int main() {
    // Unary operator overloading example
    NumberUnary num1(10);
    NumberUnary num2 = -num1;  // Using the unary minus operator
    num2.display();            // Output: Unary - Value: -10

    // Binary operator overloading example
    NumberBinary num3(10);
    NumberBinary num4(20);
    NumberBinary sum = num3 + num4;  // Using the binary plus operator
    sum.display();                   // Output: Binary - Value: 30

    return 0;
}

