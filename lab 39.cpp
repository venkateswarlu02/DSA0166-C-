#include <iostream>
#include <exception>
#include <stdexcept>
#include <type_traits>

using namespace std;

void functionThrows() {
    throw runtime_error("Exception thrown in functionThrows");
}

void functionNoThrow() noexcept {
    
}

void testThrowRestrictions() {
    try {
        
        functionThrows();
    } catch (const runtime_error& e) {
        cout << "Caught exception in testThrowRestrictions: " << e.what() << endl;
    }
    
    
    cout << "functionThrows noexcept: " 
         << (std::is_nothrow_invocable<decltype(functionThrows)>::value ? "Yes" : "No") 
         << endl;

    cout << "functionNoThrow noexcept: " 
         << (std::is_nothrow_invocable<decltype(functionNoThrow)>::value ? "Yes" : "No") 
         << endl;
}

int main() {
    try {
        testThrowRestrictions();
    } catch (const exception& e) {
        cout << "Caught exception in main: " << e.what() << endl;
    }

    return 0;
}

