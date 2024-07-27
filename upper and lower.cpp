#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

class StringConverter {
public:
    
    string toUpperCase(const string& str) {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }

   
    string toLowerCase(const string& str) {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }
};

int main() {
    StringConverter converter;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Choose conversion type (1 for uppercase, 2 for lowercase): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Uppercase: " << converter.toUpperCase(input) << endl;
    } else if (choice == 2) {
        cout << "Lowercase: " << converter.toLowerCase(input) << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}

