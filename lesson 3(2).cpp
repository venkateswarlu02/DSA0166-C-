#include <iostream>

class TrianglePattern {
private:
    int rows;
    int number;

public:
    
    TrianglePattern() {
        rows = 0;
        number = 0;
    }

    
    TrianglePattern(int r, int n) {
        rows = r;
        number = n;
        printPattern();
    }

    
    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << number << " ";
            }
            std::cout << std::endl; 
        }
    }
};

int main() {
    int rows, number;

    
    std::cout << "Enter the number of rows for the triangle: ";
    std::cin >> rows;
    std::cout << "Enter the number to repeat: ";
    std::cin >> number;

    
    TrianglePattern triangle(rows, number);

    return 0;
}
