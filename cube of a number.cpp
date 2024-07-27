#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, guess, epsilon;
    
    cout << "Enter a number: ";
    cin >> num;
    
    
    guess = num / 3.0;
    
   
    epsilon = 0.00001;

   
    while (abs(guess * guess * guess - num) > epsilon) {
        guess = (2.0 * guess + num / (guess * guess)) / 3.0;
    }

    
    if (abs(guess * guess * guess - num) < epsilon) {
        cout << "The cube root of " << num << " is approximately " << guess << endl;
    } else {
        cout << "Failed to calculate the cube root accurately." << endl;
    }

    return 0;
}

