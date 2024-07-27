#include <iostream>


int add(int a, int b) {
    return a + b;
}


double add(double a, double b) {
    return a + b;
}

int main() {
   
    int sum_int = add(5, 10);
    std::cout << "Sum of integers: " << sum_int << std::endl;

   
    double sum_double = add(3.5, 2.5);
    std::cout << "Sum of floating-point numbers: " << sum_double << std::endl;

    return 0;
}

