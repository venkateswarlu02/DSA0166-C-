#include <iostream>
using namespace std;

// Utility function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

class SumOfPrimes {
private:
    int number;
public:
    // Constructor to initialize the number and check the condition
    SumOfPrimes(int num) : number(num) {
        cout << "Checking if " << number << " can be expressed as the sum of two prime numbers:" << endl;
    }

    // Destructor to display the result
    ~SumOfPrimes() {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " = " << i << " + " << (number - i) << endl;
                found = true;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    SumOfPrimes sop(n);  // Creating an object of SumOfPrimes class

    return 0;  // Destructor will be called here when the object goes out of scope
}

