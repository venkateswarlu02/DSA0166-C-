#include <iostream>

int main() {
    
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    
    float *ptr = arr;

    
    int size = sizeof(arr) / sizeof(arr[0]);

    
    std::cout << "The values of the array are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

