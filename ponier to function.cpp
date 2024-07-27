#include <iostream>


void greet() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    
    void (*funcPtr)();

    
    funcPtr = &greet;

    
    (*funcPtr)();

    return 0;
}

