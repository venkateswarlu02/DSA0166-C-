#include <iostream>

int main() {
    
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    
    char *ptr = arr;

    
    std::cout << "The values of the array are: ";
    for (int i = 0; *(ptr + i) != '\0'; ++i) {
        std::cout << *(ptr + i);
    }
    std::cout << std::endl;

    return 0;
}

