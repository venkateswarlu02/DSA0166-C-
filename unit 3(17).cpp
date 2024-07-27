#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor with no parameters
    Rectangle() : length(0), breadth(0) {}

    // Constructor with two parameters
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Constructor with one parameter
    Rectangle(double side) : length(side), breadth(side) {}

    // Function to calculate the area of the rectangle
    double area() const {
        return length * breadth;
    }
};

int main() {
    // Create objects of Rectangle class using different constructors
    Rectangle rect1;            // No parameters
    Rectangle rect2(10, 5);     // Two parameters
    Rectangle rect3(7);         // One parameter

    // Print areas of the rectangles
    cout << "Area of Rectangle with no parameters: " << rect1.area() << endl;
    cout << "Area of Rectangle with two parameters (10, 5): " << rect2.area() << endl;
    cout << "Area of Rectangle with one parameter (7): " << rect3.area() << endl;

    return 0;
}

