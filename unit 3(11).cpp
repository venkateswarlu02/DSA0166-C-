#include <iostream>
#include <cmath> 

using namespace std;

class Shape {
private:
    double radius; 
    double length, width; 
    double base, height; 

public:
    
    Shape(double r) {
        radius = r;
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }

    
    Shape(double l, double w) {
        length = l;
        width = w;
        cout << "Area of Rectangle: " << length * width << endl;
    }

    
    Shape(double b, double h, bool isTriangle) {
        if (isTriangle) {
            base = b;
            height = h;
            cout << "Area of Triangle: " << 0.5 * base * height << endl;
        }
    }
};

int main() {
    
    Shape circle(5); 
    Shape rectangle(4, 6); 
    Shape triangle(3, 7, true); 

    return 0;
}

