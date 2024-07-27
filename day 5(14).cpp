#include <iostream>
#include <stdexcept>


void throwExceptions(int type) {
    switch (type) {
        case 1:
            throw std::runtime_error("Runtime error occurred");
        case 2:
            throw std::out_of_range("Out of range error occurred");
        case 3:
            throw std::invalid_argument("Invalid argument error occurred");
        default:
            throw std::exception(); 
    }
}

int main() {
    int type;

    std::cout << "Enter exception type (1: Runtime, 2: Out of Range, 3: Invalid Argument): ";
    std::cin >> type;

    try {
        throwExceptions(type);
    } 
    catch (const std::runtime_error &e) {
        std::cout << "Caught a runtime_error: " << e.what() << std::endl;
    } 
    catch (const std::out_of_range &e) {
        std::cout << "Caught an out_of_range: " << e.what() << std::endl;
    } 
    catch (const std::invalid_argument &e) {
        std::cout << "Caught an invalid_argument: " << e.what() << std::endl;
    } 
    catch (const std::exception &e) {
        std::cout << "Caught a general exception: " << e.what() << std::endl;
    }

    return 0;
}
