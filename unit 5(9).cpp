#include <iostream>

using namespace std;


void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> *(arr + i);
    }

    cout << "Original array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    
    delete[] arr;

    return 0;
}
