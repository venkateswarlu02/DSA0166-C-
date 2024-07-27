#include <iostream>

class MyClass {
private:
    static int count; 

public:
    MyClass() {
        count++; 
    }

    
    static void showcount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};


int MyClass::count = 0;

int main() {
    
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    
    MyClass::showcount();

    
    MyClass obj4;
    MyClass obj5;

    
    MyClass::showcount();

    return 0;
}

