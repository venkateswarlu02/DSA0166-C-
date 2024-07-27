#include <iostream>
#include <cmath> 


class Shape {
public:
    
    virtual double area() const = 0; 

  
    virtual double perimeter() const = 0; 
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double area() const override {
        return length * width;
    }

    
    double perimeter() const override {
        return 2 * (length + width);
    }
};


class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    
    double area() const override {
        double s = (side1 + side2 + side3) / 2.0; // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
   
    Rectangle rect(5.0, 3.0);
    Triangle tri(3.0, 4.0, 5.0); 

   
    const Shape* shape1 = &rect;
    const Shape* shape2 = &tri;

    
    std::cout << "Rectangle:" << std::endl;
    std::cout << "  Area: " << shape1->area() << std::endl;
    std::cout << "  Perimeter: " << shape1->perimeter() << std::endl;

    std::cout << "Triangle:" << std::endl;
    std::cout << "  Area: " << shape2->area() << std::endl;
    std::cout << "  Perimeter: " << shape2->perimeter() << std::endl;

    return 0;
}

