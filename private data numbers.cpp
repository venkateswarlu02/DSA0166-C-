#include <iostream>

class class_2; 

class class_1 {
private:
    int value1;
public:
    class_1(int v1) : value1(v1) {}
    void display() const {
        std::cout << "Value in class_1: " << value1 << std::endl;
    }
    friend void swapValues(class_1 &c1, class_2 &c2);
};

class class_2 {
private:
    int value2;
public:
    class_2(int v2) : value2(v2) {}
    void display() const {
        std::cout << "Value in class_2: " << value2 << std::endl;
    }
    friend void swapValues(class_1 &c1, class_2 &c2);
};

void swapValues(class_1 &c1, class_2 &c2) {
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    std::cout << "Before swapping:" << std::endl;
    obj1.display();
    obj2.display();

    swapValues(obj1, obj2);

    std::cout << "After swapping:" << std::endl;
    obj1.display();
    obj2.display();

    return 0;
}

