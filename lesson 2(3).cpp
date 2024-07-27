#include <iostream>
#include <cctype> 
#include <string> 


bool isValidUsername(const std::string& username) {
    
    if (username.length() < 5 || username.length() > 15) {
        return false;
    }

    
    for (char ch : username) {
        if (!isalnum(ch)) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string username;

    
    std::cout << "Enter username: ";
    std::cin >> username;

    
    if (isValidUsername(username)) {
        std::cout << "The username is valid." << std::endl;
    } else {
        std::cout << "The username is not valid." << std::endl;
    }

    return 0;
}
