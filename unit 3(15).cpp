#include <iostream>
#include <string>

using namespace std;

class DecimalToBinary {
private:
    string binaryString;

    
    void convertToBinary(int decimal) {
        if (decimal > 0) {
            
            convertToBinary(decimal / 2);
            
            binaryString += (decimal % 2 == 0) ? '0' : '1';
        }
    }

public:
    
    DecimalToBinary(int decimal) {
        if (decimal == 0) {
            binaryString = "0";
        } else {
            convertToBinary(decimal);
        }
        cout << "Binary representation: " << binaryString << endl;
    }

    
    DecimalToBinary(int decimal, bool validate) {
        if (validate && decimal < 0) {
            cout << "Error: Negative numbers are not supported." << endl;
            return;
        }
        if (decimal == 0) {
            binaryString = "0";
        } else {
            convertToBinary(decimal);
        }
        cout << "Binary representation: " << binaryString << endl;
    }
};

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    
    DecimalToBinary dtb1(decimalNumber); 
    DecimalToBinary dtb2(decimalNumber, true); 

    return 0;
}

