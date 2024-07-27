#include <iostream>

class Class2; 

class Class1 {
private:
    int value1;
public:
    Class1(int v1) : value1(v1) {}
    
    void display() const {
        std::cout << "Class1 value: " << value1 << std::endl;
    }

   
    friend void swapValues(Class1 &c1, Class2 &c2);
};

class Class2 {
private:
    int value2;
public:
    Class2(int v2) : value2(v2) {}
    
    void display() const {
        std::cout << "Class2 value: " << value2 << std::endl;
    }

    friend void swapValues(Class1 &c1, Class2 &c2);
};


void swapValues(Class1 &c1, Class2 &c2) {
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);
    
    std::cout << "Before swapping:" << std::endl;
    obj1.display();
    obj2.display();
    
    swapValues(obj1, obj2);
    
    std::cout << "After swapping:" << std::endl;
    obj1.display();
    obj2.display();
    
    return 0;
}

