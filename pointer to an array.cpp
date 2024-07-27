#include <iostream>

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};

    
    int *ptr = arr;

    
    int size = sizeof(arr) / sizeof(arr[0]);

    
    std::cout << "The values of the array are: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

