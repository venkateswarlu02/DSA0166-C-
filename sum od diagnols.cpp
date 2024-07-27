#include <iostream>

#define SIZE 3 


void sumDiagonals(int matrix[SIZE][SIZE], int& mainDiagonalSum, int& secondaryDiagonalSum) {
    mainDiagonalSum = 0;
    secondaryDiagonalSum = 0;
    
    for (int i = 0; i < SIZE; ++i) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][SIZE - i - 1];
    }
}

int main() {
    int matrix[SIZE][SIZE];
    
    std::cout << "Enter the elements of the matrix (" << SIZE << "x" << SIZE << "):" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    int mainDiagonalSum, secondaryDiagonalSum;
    sumDiagonals(matrix, mainDiagonalSum, secondaryDiagonalSum);
    
    std::cout << "Sum of the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;
    
    return 0;
}

