#include <iostream>

int main() {
    int rowsA, colsA, rowsB, colsB;

    
    std::cout << "Enter the number of rows for the first matrix: ";
    std::cin >> rowsA;
    std::cout << "Enter the number of columns for the first matrix: ";
    std::cin >> colsA;

    
    std::cout << "Enter the number of rows for the second matrix: ";
    std::cin >> rowsB;
    std::cout << "Enter the number of columns for the second matrix: ";
    std::cin >> colsB;

   
    if (colsA != rowsB) {
        std::cout << "Error: Number of columns in the first matrix must equal the number of rows in the second matrix." << std::endl;
        return 1;
    }

    
    int A[rowsA][colsA];
    int B[rowsB][colsB];
    int C[rowsA][colsB];

    
    std::cout << "Enter elements of the first matrix:" << std::endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            std::cout << "A[" << i << "][" << j << "]: ";
            std::cin >> A[i][j];
        }
    }

    
    std::cout << "Enter elements of the second matrix:" << std::endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            std::cout << "B[" << i << "][" << j << "]: ";
            std::cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
        }
    }

    
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    std::cout << "The resulting matrix after multiplication is:" << std::endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
