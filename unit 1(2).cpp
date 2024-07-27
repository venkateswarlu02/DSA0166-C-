#include <iostream>
#include <cmath> 

int main() {
    double number;
    
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    
    if (std::cin) {
        
        double cubeRoot = cbrt(number);
        std::cout << "The cube root of " << number << " is " << cubeRoot << std::endl;
    } else {
        
        std::cout << "Error: Invalid input." << std::endl;
    }
    
    return 0;
}
