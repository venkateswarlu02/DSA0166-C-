#include <iostream>
#include <cctype>  
using namespace std;


bool isValidUsername(const string& username) {
   
    if (username.length() < 5 || username.length() > 15) {
        return false;
    }

    
    for (char c : username) {
        if (!isalnum(c)) {
            return false;
        }
    }

    return true;
}

int main() {
    string username;

    
    cout << "Enter username: ";
    cin >> username;

    
    if (isValidUsername(username)) {
        cout << "The username is valid." << endl;
    } else {
        cout << "The username is invalid." << endl;
    }

    return 0;
}

