#include <iostream>

int main() {
    
    double num = 9.81;

    
    double *ptr = &num;

    
    std::cout << "The value of num is: " << *ptr << std::endl;

    return 0;
}

