#include <iostream>
#include <stdexcept>

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return numerator / denominator;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter the numerator: ";
    std::cin >> num1;
    
    std::cout << "Enter the denominator: ";
    std::cin >> num2;
    
    try {
        int result = divide(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
