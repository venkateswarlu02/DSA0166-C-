#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
   
    Rectangle(double rectLength, double rectWidth) {
        length = rectLength;
        width = rectWidth;
        std::cout << "Rectangle with length " << length << " and width " << width << " created.\n";
    }

   
    ~Rectangle() {
        std::cout << "Rectangle with length " << length << " and width " << width << " destroyed.\n";
    }

    
    double area() const {
        return length * width;
    }

   
    double perimeter() const {
        return 2 * (length + width);
    }

    
    void display() const {
        std::cout << "Length: " << length << ", Width: " << width 
                  << ", Area: " << area() << ", Perimeter: " << perimeter() << "\n";
    }
};

int main() {
   
    Rectangle rect1(10.0, 5.0);
    rect1.display();

   
    Rectangle rect2(7.5, 3.5);
    rect2.display();

    return 0;
}

