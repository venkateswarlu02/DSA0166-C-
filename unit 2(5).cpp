#include <iostream>
#include <string>
using namespace std;


inline bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    int choice;

    cout << "Menu:\n";
    cout << "1. Check if a string is a palindrome\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); 

    switch (choice) {
        case 1:
            cout << "Enter a string: ";
            getline(cin, input);

            if (isPalindrome(input)) {
                cout << "The string \"" << input << "\" is a palindrome." << endl;
            } else {
                cout << "The string \"" << input << "\" is not a palindrome." << endl;
            }
            break;

        case 2:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
    }

    return 0;
}

