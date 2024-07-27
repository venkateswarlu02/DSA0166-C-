#include <iostream>
#include <string>

int main() {
    
    std::string text = "Hello, world!";

    
    std::string* ptr = &text;

    
    std::cout << "The value of text is: " << *ptr << std::endl;

    return 0;
}

