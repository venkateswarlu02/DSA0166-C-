#include <iostream>

int main() {
    
    int num = 42;

    
    int *ptr = &num;

       
    std::cout << "The value of num is: " << *ptr << std::endl;

    return 0;
}


