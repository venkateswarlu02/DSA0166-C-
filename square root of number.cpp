#include <iostream>
using namespace std;

int main() {
    double num, guess, epsilon;
    
    cout << "Enter a number: ";
    cin >> num;
    
    
    guess = num / 2.0;
    
   
    epsilon = 0.00001;

  
    while ((guess * guess - num) > epsilon || (num - guess * guess) > epsilon) {
        guess = (guess + (num / guess)) / 2.0;
    }

   
    if (guess * guess - num < epsilon && num - guess * guess < epsilon) {
        cout << "The square root of " << num << " is approximately " << guess << endl;
    } else {
        cout << "Failed to calculate the square root accurately." << endl;
    }

    return 0;
}

