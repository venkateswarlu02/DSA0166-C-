#include <iostream>
#define PI 3.14159
using namespace std;


class Circle {
protected:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }

    double areaCircle() {
        return PI * radius * radius;
    }
};


class Rectangle : public Circle {
protected:
    double length;
    double width;
public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double areaRectangle() {
        return length * width;
    }
};


class Cylinder : public Rectangle {
protected:
    double height;
public:
    void setHeight(double h) {
        height = h;
    }

    double volumeCylinder() {
        return areaCircle() * height;
    }
};

int main() {
    
    Cylinder cyl;

    
    cyl.setRadius(5.0);
    cyl.setDimensions(4.0, 6.0);
    cyl.setHeight(10.0);

    
    cout << "Area of Circle: " << cyl.areaCircle() << endl;

    
    cout << "Area of Rectangle: " << cyl.areaRectangle() << endl;

    
    cout << "Volume of Cylinder: " << cyl.volumeCylinder() << endl;

    return 0;
}
