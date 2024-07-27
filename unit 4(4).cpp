#include <iostream>
using namespace std;

int main() {
    int num = 42; 
    int* ptr = &num; 

    cout << "Value of the variable: " << num << endl;
    cout << "Address of the variable: " << &num << endl;
    cout << "Address stored in the pointer: " << ptr << endl;

    return 0;
}
