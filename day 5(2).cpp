#include <iostream>

class Shape {
public:
    virtual double area() const = 0; 
    virtual ~Shape() {} 
};

class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void display() const {
        std::cout << "Rectangle: Length = " << length << ", Width = " << width << std::endl;
    }
};

class Cuboid : public Rectangle {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double volume() const {
        return length * width * height;
    }

    double surfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }

    void display() const {
        std::cout << "Cuboid: Length = " << length << ", Width = " << width << ", Height = " << height << std::endl;
        std::cout << "Surface Area = " << surfaceArea() << ", Volume = " << volume() << std::endl;
    }
};

int main() {
    Cuboid cuboid(5.0, 3.0, 4.0);
    cuboid.display();
    return 0;
}
