#include <iostream>
using namespace std;

class ReverseNumber {
private:
    int number;
public:
    
    ReverseNumber(int num) : number(num) {}

    
    void displayReverse() {
        int reversedNumber = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            reversedNumber = reversedNumber * 10 + digit;
            temp /= 10;
        }

        cout << "The reverse of the number " << number << " is: " << reversedNumber << endl;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    ReverseNumber rn(n);  
    rn.displayReverse();  

    return 0;
}

