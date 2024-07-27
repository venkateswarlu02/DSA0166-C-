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

    
    int countOccurrences(int value) const {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                ++count;
            }
        }
        return count;
    }
};

int main() {
    int size, value;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    ArrayManager arrayManager(size);
    arrayManager.fillArray();

    std::cout << "Enter the value to count occurrences: ";
    std::cin >> value;

    int count = arrayManager.countOccurrences(value);
    std::cout << "The value " << value << " occurs " << count << " times in the array." << std::endl;

    return 0;
}

