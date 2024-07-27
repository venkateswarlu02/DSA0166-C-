#include <iostream>
#include <cmath> 

using namespace std;

class Shape {
private:
    double side; 
    double radius, height; 

public:
    
    Shape(double s);

    
    Shape(double r, double h, bool isCylinder);

    
    void displayVolume();
};


Shape::Shape(double s) : side(s) {
    cout << "Volume of Cube: " << side * side * side << endl;
}


Shape::Shape(double r, double h, bool isCylinder) : radius(r), height(h) {
    if (isCylinder) {
        cout << "Volume of Cylinder: " << M_PI * radius * radius * height << endl;
    }
}


void Shape::displayVolume() {
    
}

int main() {
    
    Shape cube(3); 
    Shape cylinder(2, 5, true); 

    return 0;
}

