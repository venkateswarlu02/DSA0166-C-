#include <iostream>
#include <cmath>

// Abstract base class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    // Constructor to initialize the side of the square
    Square(double s) : side(s) {}

    // Override calculateArea to return the area of the square
    double calculateArea() const override {
        return side * side;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize the radius of the circle
    Circle(double r) : radius(r) {}

    // Override calculateArea to return the area of the circle
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Creating a Square object
    Shape* square = new Square(5.0);

    // Creating a Circle object
    Shape* circle = new Circle(3.0);

    // Calculating and displaying the area of the square
    std::cout << "Area of the square: " << square->calculateArea() << std::endl;

    // Calculating and displaying the area of the circle
    std::cout << "Area of the circle: " << circle->calculateArea() << std::endl;

    // Cleaning up
    delete square;
    delete circle;

    return 0;
}
