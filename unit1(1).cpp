#include <iostream>
#include <cmath> 

int main() {
    double number;
    
   
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    
    if (number >= 0) {
        
        double squareRoot = sqrt(number);
        std::cout << "The square root of " << number << " is " << squareRoot << std::endl;
    } else {
        
        std::cout << "Error: Cannot compute the square root of a negative number." << std::endl;
    }
    
    return 0;
}

