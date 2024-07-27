#include <iostream>
#include <cmath> 

class Area {
public:
    
    Area(double radius) {
        double area = M_PI * radius * radius;
        std::cout << "Area of Circle: " << area << std::endl;
    }

    
    Area(double length, double width) {
        double area = length * width;
        std::cout << "Area of Rectangle: " << area << std::endl;
    }

    
    Area(double base, double height, bool isTriangle) {
        double area = 0.5 * base * height;
        std::cout << "Area of Triangle: " << area << std::endl;
    }
};

int main() {
    int choice;
    
    std::cout << "Calculate Area of:\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            Area circle(radius); 
            break;
        }
        case 2: {
            double length, width;
            std::cout << "Enter the length and width of the rectangle: ";
            std::cin >> length >> width;
            Area rectangle(length, width); 
            break;
        }
        case 3: {
            double base, height;
            std::cout << "Enter the base and height of the triangle: ";
            std::cin >> base >> height;
            Area triangle(base, height, true); 
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
