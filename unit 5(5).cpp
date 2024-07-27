#include <iostream>
#include <cmath> 
using namespace std;


class Shape {
public:
   
    virtual double area() const = 0;
};


class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    
    double area() const override {
        return side * side;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    double side, radius;

    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

   
    Shape* square = new Square(side);
    Shape* circle = new Circle(radius);

    
    cout << "Area of the square: " << square->area() << endl;
    cout << "Area of the circle: " << circle->area() << endl;

    
    delete square;
    delete circle;

    return 0;
}
