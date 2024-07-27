#include <iostream>
using namespace std;


class Number {
protected:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
};


class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};


class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    
    Square sq;
    Cube cu;

    
    sq.setNumber(number);
    cu.setNumber(number);

    
    cout << "Square of " << number << " is: " << sq.getSquare() << endl;
    cout << "Cube of " << number << " is: " << cu.getCube() << endl;

    return 0;
}
