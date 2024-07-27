#include <iostream>
#include <cmath>


double calculateArea(double radius) {
    const double PI = 3.14159265358979323846;
    return PI * radius * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    
    if (radius < 0) {
        std::cerr << "Radius cannot be negative." << std::endl;
    } else {
        double area = calculateArea(radius);
        std::cout << "The area of the circle with radius " << radius << " is " << area << std::endl;
    }
    
    return 0;
}

