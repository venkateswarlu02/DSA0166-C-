#include <iostream>


class Shape {
public:
    
    virtual void display() const {
        std::cout << "This is a shape." << std::endl;
    }
};


class Rectangle : public Shape {
protected:
    double length;
    double breadth;

public:
    
    Rectangle(double l = 0, double b = 0) : length(l), breadth(b) {}

    
    double area() const {
        return length * breadth;
    }

    
    void display() const override {
        std::cout << "This is a rectangle." << std::endl;
    }
};


class Cuboid : public Rectangle {
private:
    double height;

public:
    
    Cuboid(double l = 0, double b = 0, double h = 0) : Rectangle(l, b), height(h) {}

    
    double volume() const {
        return length * breadth * height;
    }

   
    void display() const override {
        std::cout << "This is a cuboid." << std::endl;
    }
};

int main() {
    
    Cuboid cuboid(5.0, 3.0, 4.0);

    
    cuboid.display();

    
    std::cout << "Area of the base rectangle: " << cuboid.area() << std::endl;

    
    std::cout << "Volume of the cuboid: " << cuboid.volume() << std::endl;

    return 0;
}
