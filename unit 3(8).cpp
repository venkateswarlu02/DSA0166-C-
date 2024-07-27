#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;


int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = 0; i < length; ++i) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    
    return decimal;
}


string decimalToOctal(int decimal) {
    string octal = "";
    
    while (decimal > 0) {
        int remainder = decimal % 8;
        stringstream ss;
        ss << remainder;
        octal = ss.str() + octal;
        decimal /= 8;
    }
    
    return octal;
}


string binaryToOctal(const string& binary) {
    int decimal = binaryToDecimal(binary);
    string octal = decimalToOctal(decimal);
    return octal;
}

int main() {
    string binary;
    
    cout << "Enter a binary number: ";
    cin >> binary;
    
    string octal = binaryToOctal(binary);
    
    cout << "The octal equivalent is: " << octal << endl;
    
    return 0;
}

