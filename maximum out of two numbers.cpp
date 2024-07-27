#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Declare the friend function
    friend int findMax(const Number &a, const Number &b);
};

// Definition of the friend function
int findMax(const Number &a, const Number &b) {
    return (a.value > b.value) ? a.value : b.value;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Number n1(num1), n2(num2);

    std::cout << "The maximum number is: " << findMax(n1, n2) << std::endl;

    return 0;
}

