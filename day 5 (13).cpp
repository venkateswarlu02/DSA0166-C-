#include <iostream>
#include <stdexcept>

class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 10; // Initialize array with some values
        }
    }

    ~Array() {
        delete[] arr;
    }

    int getElement(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Array index out of bounds");
        }
        return arr[index];
    }

    int getSize() const {
        return size;
    }
};

int main() {
    int size = 5;
    Array myArray(size);

    std::cout << "Array size is: " << size << std::endl;

    try {
        for (int i = 0; i <= size; ++i) { // Intentionally going out of bounds
            std::cout << "Element at index " << i << ": " << myArray.getElement(i) << std::endl;
        }
    } catch (const std::out_of_range &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
