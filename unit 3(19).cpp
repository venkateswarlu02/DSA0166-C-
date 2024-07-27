#include <iostream>

using namespace std;

class Shape {
public:
    // Function to print the area of a square
    void printArea(double side) const {
        double area = side * side;
        cout << "Area of the square with side " << side << " is: " << area << endl;
    }

    // Function to print the area of a rectangle
    void printArea(double length, double breadth) const {
        double area = length * breadth;
        cout << "Area of the rectangle with length " << length << " and breadth " << breadth << " is: " << area << endl;
    }
};

int main() {
    Shape shape;

    double side, length, breadth;

    // Input for square
    cout << "Enter the side length of the square: ";
    cin >> side;
    shape.printArea(side);

    // Input for rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    shape.printArea(length, breadth);

    return 0;
}

