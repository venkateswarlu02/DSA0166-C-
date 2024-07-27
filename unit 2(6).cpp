#include <iostream>
using namespace std;

// Function to swap two numbers using call-by-value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

// Function to swap two numbers using call-by-reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference function:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "Original values:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Swap using call-by-value
    cout << "\nSwapping using call-by-value:" << endl;
    swapByValue(x, y);
    cout << "Values after swapByValue function:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Swap using call-by-reference
    cout << "\nSwapping using call-by-reference:" << endl;
    swapByReference(x, y);
    cout << "Values after swapByReference function:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

