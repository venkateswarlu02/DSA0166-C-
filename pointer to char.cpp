#include <iostream>

int main() {
    
    char letter = 'A';

    
    char *ptr = &letter;

    
    std::cout << "The value of letter is: " << *ptr << std::endl;

    return 0;
}

