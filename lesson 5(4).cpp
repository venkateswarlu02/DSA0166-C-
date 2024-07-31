#include <iostream>

// Function to swap two elements using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in ascending order using pointers
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

// Function to print the array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> *(arr + i);
    }

    bubbleSort(arr, size);

    std::cout << "Sorted array in ascending order: ";
    printArray(arr, size);

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}
