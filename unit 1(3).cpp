#include <iostream>
#include <limits> 

int main() {
    unsigned int number;
    unsigned int bitPosition;

    
    std::cout << "Enter a number: ";
    std::cin >> number;

    
    std::cout << "Enter the bit position to set (0-based index): ";
    std::cin >> bitPosition;

    
    if (bitPosition < std::numeric_limits<unsigned int>::digits) {
        
        unsigned int mask = 1 << bitPosition; 
        number |= mask; 

        std::cout << "The new number after setting bit " << bitPosition << " is " << number << std::endl;
    } else {
       1
        std::cout << "Error: Invalid bit position." << std::endl;
    }

    return 0;
}
