#include <iostream>
#include <sstream>
#include <string>

int countWords(const std::string& str) {
    std::istringstream stream(str);
    std::string word;
    int count = 0;

    while (stream >> word) {
        ++count;
    }

    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int wordCount = countWords(input);
    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}

