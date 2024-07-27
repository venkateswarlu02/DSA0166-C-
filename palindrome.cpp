#include <iostream>
using namespace std;

class PalindromeChecker {
public:
    bool isPalindrome(int number) {
        int originalNumber = number;
        int reversedNumber = 0;
        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }
        return originalNumber == reversedNumber;
    }
};

int main() {
    PalindromeChecker checker;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (checker.isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}

