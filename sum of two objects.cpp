#include <iostream>

class Number {
private:
    int value;

public:
    
    Number(int v = 0) : value(v) {}

    
    friend Number sum(const Number &n1, const Number &n2);

    
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};


Number sum(const Number &n1, const Number &n2) {
    
    return Number(n1.value + n2.value);
}

int main() {
   
    Number num1(10);
    Number num2(20);

    
    std::cout << "num1: ";
    num1.display();
    std::cout << "num2: ";
    num2.display();

    
    Number result = sum(num1, num2);

    
    std::cout << "Sum: ";
    result.display();

    return 0;
}

