#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    void printValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    
    MyClass obj(42);

    
    MyClass* ptr = &obj;

    
    ptr->printValue();

    return 0;
}
