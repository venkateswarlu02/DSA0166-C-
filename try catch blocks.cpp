#include <iostream>
#include <stdexcept>

void innerFunction(int divisor, int dividend) {
    try {
        if (divisor == 0) {
            throw std::invalid_argument("Division by zero error inside innerFunction");
        }
        std::cout << "Result inside innerFunction: " << dividend / divisor << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Exception caught inside innerFunction: " << e.what() << "\n";
        throw; 
    }
}

void outerFunction(int divisor, int dividend) {
    try {
        innerFunction(divisor, dividend);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught inside outerFunction: " << e.what() << "\n";
    }
}

int main() {
    int divisor = 0;
    int dividend = 10;

    try {
        outerFunction(divisor, dividend);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught inside main: " << e.what() << "\n";
    }

    return 0;
}

