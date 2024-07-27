#include <iostream>
#include <stdexcept>


class Resource {
public:
    Resource() {
        std::cout << "Resource acquired\n";
    }

    ~Resource() {
        std::cout << "Resource released\n";
    }
};


void simulateWork() {
    Resource res;  

    
    std::cout << "Doing some work that may throw an exception...\n";
    throw std::runtime_error("Exception occurred during work");
}

int main() {
    try {
        simulateWork();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
        
    }

    return 0;
}

