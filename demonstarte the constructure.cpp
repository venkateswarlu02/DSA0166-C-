#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    
    Rectangle() {
        width = 0;
        height = 0;
        std::cout << "Default constructor called." << std::endl;
    }

   
    Rectangle(int w, int h) {
        width = w;
        height = h;
        std::cout << "Parameterized constructor called." << std::endl;
    }

    
    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
        std::cout << "Copy constructor called." << std::endl;
    }

    
    int area() const {
        return width * height;
    }

    
    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    
    Rectangle rect1;            
    rect1.display();

    Rectangle rect2(10, 20);    
    rect2.display();
    std::cout << "Area: " << rect2.area() << std::endl;

    Rectangle rect3(rect2);    
    rect3.display();
    std::cout << "Area: " << rect3.area() << std::endl;

    return 0;
}

