#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
       
        while (left < right && !std::isalnum(str[left])) {
            ++left;
        }
        while (left < right && !std::isalnum(str[right])) {
            --right;
        }
        
        
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }
    
    return 0;
}

