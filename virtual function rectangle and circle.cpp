#include <iostream>
#include <cmath> 
class Shape {
public:
    
    virtual double area() const = 0; 
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    
    double area() const { 
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    
    double area() const { 
        return M_PI * radius * radius;
    }
};

int main() {
    
    Rectangle rect(10.0, 5.0);
    Circle circ(7.0);

    
    Shape* shape1 = &rect;
    Shape* shape2 = &circ;

   
    std::cout << "Area of Rectangle: " << shape1->area() << std::endl;
    std::cout << "Area of Circle: " << shape2->area() << std::endl;

    return 0;
}

