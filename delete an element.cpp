#include <iostream>

class ArrayManager {
private:
    int* arr;
    int size;

public:
    ArrayManager(int s) : size(s) {
        arr = new int[size];
    }

    ~ArrayManager() {
        delete[] arr;
    }

    void fillArray() {
        std::cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    void displayArray() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void deleteElement(int position) {
        if (position < 0 || position >= size) {
            std::cout << "Invalid position!" << std::endl;
            return;
        }
        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
};

int main() {
    int size, position;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    ArrayManager arrayManager(size);
    arrayManager.fillArray();

    std::cout << "Array before deletion: ";
    arrayManager.displayArray();

    std::cout << "Enter the position of the element to delete: ";
    std::cin >> position;

    arrayManager.deleteElement(position);

    std::cout << "Array after deletion: ";
    arrayManager.displayArray();

    return 0;
}

