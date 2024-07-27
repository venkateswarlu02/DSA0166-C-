#include <iostream>
#include <cmath>  // Include cmath for sqrt function

using namespace std;

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h = 0, double w = 0) {
        height = h;
        width = w;
    }

    virtual double area() = 0;
    virtual double perimeter() = 0;

    void setHeight(double h) {
        height = h;
    }

    void setWidth(double w) {
        width = w;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double h = 0, double w = 0) : Shape(h, w) {}

    double area() override {
        return height * width;
    }

    double perimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h = 0, double w = 0) : Shape(h, w) {}

    double area() override {
        return 0.5 * height * width;
    }

    double perimeter() override {
        return height + width + sqrt(height * height + width * width);
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(6, 8);

    cout << "Rectangle:" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << tri.area() << endl;
    cout << "Perimeter: " << tri.perimeter() << endl;

    return 0;
}

