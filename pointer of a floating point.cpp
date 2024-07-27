#include <iostream>

int main() {
    
    float num = 3.14;

    
    float *ptr = &num;

    
    std::cout << "The value of num is: " << *ptr << std::endl;

    return 0;
}

