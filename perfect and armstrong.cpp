#include <iostream>
#include <cmath>

class NumberChecker {
public:
    
    bool operator()(int num, const std::string& type) const {
        if (type == "perfect") {
            int sum = 0;
            for (int i = 1; i <= num / 2; ++i) {
                if (num % i == 0) {
                    sum += i;
                }
            }
            return sum == num;
        } else if (type == "armstrong") {
            int sum = 0;
            int originalNum = num;
            int n = 0;
            while (originalNum != 0) {
                originalNum /= 10;
                ++n;
            }
            originalNum = num;
            while (originalNum != 0) {
                int digit = originalNum % 10;
                sum += std::pow(digit, n);
                originalNum /= 10;
            }
            return sum == num;
        }
        return false;
    }
};

int main() {
    NumberChecker checker;
    int num;
    
    std::cout << "Enter a number to check for Perfect Number: ";
    std::cin >> num;
    if (checker(num, "perfect")) {
        std::cout << num << " is a Perfect Number." << std::endl;
    } else {
        std::cout << num << " is not a Perfect Number." << std::endl;
    }

    std::cout << "Enter a number to check for Armstrong Number: ";
    std::cin >> num;
    if (checker(num, "armstrong")) {
        std::cout << num << " is an Armstrong Number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong Number." << std::endl;
    }

    return 0;
}

