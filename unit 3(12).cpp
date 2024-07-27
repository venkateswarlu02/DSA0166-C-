#include <iostream>
#include <cmath> 

using namespace std;

class Shape {
private:
    double side; 
    double radius, height; 

public:
    
    Shape(double s) {
        side = s;
        cout << "Volume of Cube: " << side * side * side << endl;
    }

    
    Shape(double r, double h, bool isCylinder) {
        if (isCylinder) {
            radius = r;
            height = h;
            cout << "Volume of Cylinder: " << M_PI * radius * radius * height << endl;
        }
    }
};

int main() {
    
    Shape cube(3); 
    Shape cylinder(2, 5, true); 

    return 0;
}

