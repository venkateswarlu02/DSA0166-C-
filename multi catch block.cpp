#include <iostream>


void divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error"; 
    }
    else if (denominator < 0) {
        throw std::string("Negative denominator error"); 
    }
    else {
        int result = numerator / denominator;
        std::cout << "Result of division: " << result << std::endl;
    }
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
        std::cerr << "Error (const char*): " << errorMessage << std::endl;
    }
    catch (std::string& errorMessage) {
        std::cerr << "Error (std::string): " << errorMessage << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
    }

    return 0;
}

