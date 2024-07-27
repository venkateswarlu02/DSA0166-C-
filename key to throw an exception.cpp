#include <iostream>


void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error"; 
    }
    int result = numerator / denominator;
    std::cout << "Result of division: " << result << std::endl;
}

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    try {
        divide(numerator, denominator);
    }
    catch (const char* errorMessage) {
        std::cerr << "Error: " << errorMessage << std::endl;
    }

    return 0;
}

