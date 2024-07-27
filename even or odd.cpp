#include <iostream>
using namespace std;

class NumberChecker {
public:
    void checkEvenOrOdd(int number) {
        if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } else {
            cout << number << " is odd." << endl;
        }
    }
};

int main() {
    NumberChecker checker;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    checker.checkEvenOrOdd(num);

    return 0;
}

