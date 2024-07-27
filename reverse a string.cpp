#include <iostream>
#include <string>


std::string reverseString(const std::string& str) {
    std::string reversedStr = str;
    int n = reversedStr.length();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string reversed = reverseString(input);
    std::cout << "Reversed string: " << reversed << std::endl;
    
    return 0;
}

