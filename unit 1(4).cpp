#include <iostream>
#include <cmath> 

int main() {
    double base, exponent;
    
    
    std::cout << "Enter the base: ";
    std::cin >> base;
    
    
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    
    
    double result = pow(base, exponent);
    
    
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;
    
    return 0;
}
