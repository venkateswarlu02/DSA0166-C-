#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle(int l, int w) {
        
        this->length = l;
        this->width = w;
    }

    
    void setLength(int l) {
        this->length = l;
    }

    
    void setWidth(int w) {
        this->width = w;
    }

    
    int area() const {
        return this->length * this->width;
    }

    
    void display() const {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    
    Rectangle rect(10, 5);

    
    rect.display();
    cout << "Area: " << rect.area() << endl;

    
    rect.setLength(20);
    rect.setWidth(10);

   
    rect.display();
    cout << "Area: " << rect.area() << endl;

    return 0;
}
