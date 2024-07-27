#include <iostream>
using namespace std;


class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    friend Complex addComplex(const Complex &c1, const Complex &c2);

    
    void display() {
        cout << real << " + " << imag << "i";
    }
};


Complex addComplex(const Complex &c1, const Complex &c2) {
    
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}


int main() {
    
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    
    cout << "Complex Number 1: ";
    c1.display();
    cout << endl;

    cout << "Complex Number 2: ";
    c2.display();
    cout << endl;

    
    Complex result = addComplex(c1, c2);

    
    cout << "\nSum of Complex Numbers: ";
    result.display();
    cout << endl;

    return 0;
}

