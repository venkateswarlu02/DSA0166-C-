#include <iostream>
#include <stdexcept> 

using namespace std;


void processInput(int num) {
    if (num == 0) {
        throw std::invalid_argument("Number cannot be zero."); 
    } else if (num < 0) {
        throw std::runtime_error("Number cannot be negative."); 
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        processInput(num);
        cout << "Valid input: " << num << endl;
    } catch (const std::invalid_argument& e) {
        cout << "Invalid Argument Exception occurred: " << e.what() << endl;
    } catch (const std::runtime_error& e) {
        cout << "Runtime Error Exception occurred: " << e.what() << endl;
    } catch (const std::exception& e) {
        cout << "Standard Exception occurred: " << e.what() << endl;
    }

    return 0;
}

