#include <iostream>
#include <exception>

using namespace std;


class CustomException : public exception {
private:
    const char* message;

public:
    CustomException(const char* msg) : message(msg) {}

    
    const char* what() const throw() {
        return message;
    }
};


void validateNumber(int num) {
    if (num <= 0) {
        throw CustomException("Number must be positive and non-zero.");
    }
}

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    try {
        validateNumber(num);
        cout << "Valid input: " << num << endl;
    } catch (const CustomException& e) {
        cout << "Custom Exception occurred: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Standard Exception occurred: " << e.what() << endl;
    }

    return 0;
}

