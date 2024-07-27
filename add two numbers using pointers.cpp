#include <iostream>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    
    ptr1 = &num1;
    ptr2 = &num2;

    
    std::cout << "Enter first number: ";
    std::cin >> *ptr1;
    std::cout << "Enter second number: ";
    std::cin >> *ptr2;

    
    sum = *ptr1 + *ptr2;

    
    ptrSum = &sum;

    
    std::cout << "Sum: " << *ptrSum << std::endl;

    return 0;
}

