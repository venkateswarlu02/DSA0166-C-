#include <iostream>
#include <cstring>


std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}


char* concatenate(const char* str1, const char* str2) {
    int length1 = std::strlen(str1);
    int length2 = std::strlen(str2);
    char* result = new char[length1 + length2 + 1]; 

    std::strcpy(result, str1);
    std::strcat(result, str2);

    return result;
}

int main() {
    
    std::string string1 = "Hello, ";
    std::string string2 = "world!";
    std::string resultString = concatenate(string1, string2);
    std::cout << "Concatenated std::string: " << resultString << std::endl;

    
    const char* charArray1 = "Hello, ";
    const char* charArray2 = "world!";
    char* resultCharArray = concatenate(charArray1, charArray2);
    std::cout << "Concatenated char array: " << resultCharArray << std::endl;

    
    delete[] resultCharArray;

    return 0;
}

