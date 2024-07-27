#include <iostream>
using namespace std;


class Number1 {
protected:
    int num1;
public:
    void setNum1(int n) {
        num1 = n;
    }
};


class Number2 {
protected:
    int num2;
public:
    void setNum2(int n) {
        num2 = n;
    }
};


class Sum : public Number1, public Number2 {
public:
    int getSum() {
        return num1 + num2;
    }
};

int main() {
    Sum sumObj;
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    sumObj.setNum1(a);

    cout << "Enter second number: ";
    cin >> b;
    sumObj.setNum2(b);

    cout << "Sum: " << sumObj.getSum() << endl;

    return 0;
}
