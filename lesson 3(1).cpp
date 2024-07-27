#include <iostream>

class Cube {
public:
    
    Cube() {
        std::cout << "No number provided.\n";
    }

    
    Cube(int n) {
        displayCubes(n);
    }

    
    void displayCubes(int n) {
        for (int i = 1; i <= n; ++i) {
            std::cout << "Cube of " << i << " is " << i * i * i << std::endl;
        }
    }
};

int main() {
    int number;

    
    std::cout << "Enter a number: ";
    std::cin >> number;

    
    Cube cube(number);

    return 0;
}

